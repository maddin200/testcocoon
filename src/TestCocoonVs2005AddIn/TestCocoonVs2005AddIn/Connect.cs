using System;
using Extensibility;
using EnvDTE;
using EnvDTE80;
using Microsoft.VisualStudio.CommandBars;
using System.Resources;
using System.Reflection;
using System.Globalization;
using System.Windows.Forms;
using System.Collections;
using Microsoft.VisualStudio.VCProjectEngine;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace TestCocoonVs2005AddIn
{
  public class Connect : IDTExtensibility2, IDTCommandTarget
  {
    TestCocoon TestCocoon = null;
    bool bAddinInitialized = false;

    public Connect()
    {
      TestCocoon = new TestCocoon(this);
    }

    public void OnConnection(object application, ext_ConnectMode connectMode, object addInInst, ref Array custom)
    {
      _applicationObject = (DTE2)application;
      _addInInstance = (AddIn)addInInst;


      switch (connectMode)
      {
        case ext_ConnectMode.ext_cm_Startup:      //     The add-in was loaded when Visual Studio started.
        case ext_ConnectMode.ext_cm_AfterStartup: //     The add-in was loaded after Visual Studio started.
        case ext_ConnectMode.ext_cm_External:     //     The add-in was loaded by an external client. (This setting is no longer used by Visual Studio.)
        case ext_ConnectMode.ext_cm_CommandLine:  //     The add-in was loaded from the command line.
        case ext_ConnectMode.ext_cm_Solution:     //     The add-in was loaded with a solution.
        case ext_ConnectMode.ext_cm_UISetup:      //     The add-in was loaded for user interface setup.
          if (!TestCocoon.isTestCocoonAvailable())
          {
            Log("TestCocoon not installed - Add-In deactivated.");
            return;
          }
          TestCocoon.AdjustPath();
          object[] contextGUIDS = new object[] { };
          Commands2 commands = (Commands2)_applicationObject.Commands;
          string projectMenuName;

          try
          {
            ResourceManager resourceManager = new ResourceManager("TestCocoonVs2005AddIn.CommandBar", Assembly.GetExecutingAssembly());
            CultureInfo cultureInfo = new System.Globalization.CultureInfo(_applicationObject.LocaleID);
            string resourceName = String.Concat(cultureInfo.TwoLetterISOLanguageName, "Tools");
            projectMenuName = resourceManager.GetString(resourceName);
          }
          catch (Exception e)
          {
            Debug(e);
            projectMenuName = "Tools";
          }

          Microsoft.VisualStudio.CommandBars.CommandBar menuBarCommandBar = ((Microsoft.VisualStudio.CommandBars.CommandBars)_applicationObject.CommandBars)["MenuBar"];

          CommandBarControl projectControl = menuBarCommandBar.Controls[projectMenuName];
          CommandBarPopup projectPopup = (CommandBarPopup)projectControl;

          try
          {
            Command commandGenerate = commands.AddNamedCommand2(
                  _addInInstance,
                  "GenerateConfiguration",
                  "Code Coverage Build Mode...",
                  "Generates a code coverage build mode using TestCocoon for the instrumentation",
                  true,
                  0,
                  ref contextGUIDS,
                  (int)vsCommandStatus.vsCommandStatusSupported + (int)vsCommandStatus.vsCommandStatusEnabled,
                  (int)vsCommandStyle.vsCommandStylePictAndText,
                  vsCommandControlType.vsCommandControlTypeButton
                  );

            if ((commandGenerate != null) && (projectPopup != null))
            {
              commandGenerate.AddControl(projectPopup.CommandBar, 1);
            }
          }
          catch (System.ArgumentException e)
          {
            Debug(e);
            //If we are here, then the exception is probably because a command with that name
            //  already exists. If so there is no need to recreate the command and we can 
            //  safely ignore the exception.
          }
          if (!bAddinInitialized)
          {
            bAddinInitialized = true;
            Log("TestCocoon Add-In activated.");
          }
          break;
      }
    }

    public void OnDisconnection(ext_DisconnectMode disconnectMode, ref Array custom)
    {
    }

    public void OnAddInsUpdate(ref Array custom)
    {
    }

    public void OnStartupComplete(ref Array custom)
    {
    }

    public void OnBeginShutdown(ref Array custom)
    {
    }


    public void QueryStatus(string commandName, vsCommandStatusTextWanted neededText, ref vsCommandStatus status, ref object commandText)
    {
      if (neededText == vsCommandStatusTextWanted.vsCommandStatusTextWantedNone)
      {
        if ((commandName == "TestCocoonVs2005AddIn.Connect.GenerateConfiguration")
              || (commandName == "TestCocoonVs2008AddIn.Connect.GenerateConfiguration"))
        {
          if (!TestCocoon.isTestCocoonAvailable())
          {
            status = vsCommandStatus.vsCommandStatusInvisible | vsCommandStatus.vsCommandStatusUnsupported;
            Debug("TestCocoon is not available (%TESTCOCOON% is not defined)");
            return;
          }
          ArrayList projects = new ArrayList();
          try
          {
            TestCocoon.FindProjects(ref projects);
            if (projects.Count != 0)
            {
              status = vsCommandStatus.vsCommandStatusSupported | vsCommandStatus.vsCommandStatusEnabled;
              Debug("Number of projects found not null");
            }
            else
            {
              status = vsCommandStatus.vsCommandStatusSupported;
              Debug("Number of projects found null");
            }
          }
          catch (Exception e)
          {
            Debug(e);
            status = vsCommandStatus.vsCommandStatusSupported;
            Debug("Reading number of projects not possible");
          }
          return;
        }
      }
    }

    public void Exec(string commandName, vsCommandExecOption executeOption, ref object varIn, ref object varOut, ref bool handled)
      {
         handled = false;
         if (executeOption == vsCommandExecOption.vsCommandExecOptionDoDefault)
         {
            if ((commandName == "TestCocoonVs2005AddIn.Connect.GenerateConfiguration")
                  || (commandName == "TestCocoonVs2008AddIn.Connect.GenerateConfiguration"))
            {
                TestCocoon.AdjustPath();
               // get the list of projects
               ArrayList projects = new ArrayList();
               try
               {
                  TestCocoon.FindProjects(ref projects);
                  if (projects.Count == 0)
                  {
                     ShowMessageBox("No Visual C++ projects open.", "Error");
                     return;
                  }
               }
               catch (Exception e)
               {
                  Debug(e);
                  ShowMessageBox("No Visual C++ projects open.", "Error");
                  return;
               }
               // get the active project
               string activeProject = TestCocoon.FindActiveProject();
               handled = true;
               BuildModeGenerationGUI f = new BuildModeGenerationGUI();
               // load the given configurations into the combo box
               foreach (String project in projects)
               {
                  String[] configs = TestCocoon.FindConfigs(project, "WIN32");
                  f.AddConfigs(project, configs);
               }
               f.setAdditionalIncludes(TestCocoon.FindListOfIncludeDirectories());
               // load project names
               f.FillProjects(ref projects, activeProject);
               f.ShowDialog();
               // determine linker type
               List<string> additionalParams = f.Parameters();
               string coveragescanner_args = "";
               try
               {
                 coveragescanner_args = System.Environment.GetEnvironmentVariable("COVERAGESCANNER_ARGS");
               }
               catch
               {
                 coveragescanner_args = "";
               }
               string coveragescanner_args_new = coveragescanner_args;

               try
               {
                 switch (f.Action)
                 {
                   case BuildModeGenerationGUI.action_t.DISABLE_COVERAGE_CONFIG:
                     {
                       TestCocoon.AdjustPath();
                       if (f.AllProjects())
                       {
                         foreach (string project in projects)
                         {
                           try
                           {
                             TestCocoon.DisableTestCocoonConfig(
                                   f._config.SelectedItem.ToString(),
                                   project);
                           }
                           catch (Exception e)
                           {
                             Debug(e);
                             ShowMessageBox("Error creating the configuration", "Error");
                           }
                         }
                       }
                       else
                       {
                         TestCocoon.DisableTestCocoonConfig(
                               f._config.SelectedItem.ToString(),
                               f._projects.SelectedItem.ToString());
                       }

                       ShowMessageBox("Code coverage disabled.", "TestCocoon");
                     }
                     break;
                   case BuildModeGenerationGUI.action_t.ENABLE_COVERAGE_CONFIG:
                     {
                       TestCocoon.AdjustPath();
                       if (f.AllProjects())
                       {
                         foreach (string project in projects)
                         {
                           try
                           {
                             TestCocoon.CreateTestCocoonConfig(
                                   f._config.SelectedItem.ToString(),
                                   project,
                                   additionalParams,
                                   f.getAdditionalIncludes(),
                                   f.GenerateQtConfiguration);
                           }
                           catch (Exception e)
                           {
                             Debug(e);
                             ShowMessageBox("Error creating the configuration", "Error");
                           }
                         }
                       }
                       else
                       {
                         TestCocoon.CreateTestCocoonConfig(
                               f._config.SelectedItem.ToString(),
                               f._projects.SelectedItem.ToString(),
                               additionalParams,
                               f.getAdditionalIncludes(),
                               f.GenerateQtConfiguration);
                       }

                       ShowMessageBox("Code coverage enabled.", "TestCocoon");
                     }
                     break;
                   case BuildModeGenerationGUI.action_t.ENABLE_COVERAGE_ENV:
                     {
                       coveragescanner_args_new = "";
                       bool first = true;
                       foreach (string s in additionalParams)
                       {
                         if (!first)
                           coveragescanner_args_new += " ";
                         coveragescanner_args_new += s;
                         first = false;
                       }
                     }
                     break;
                   case BuildModeGenerationGUI.action_t.DISABLE_COVERAGE_ENV:
                     coveragescanner_args_new = "";
                     break;
                 }

                 if (coveragescanner_args != coveragescanner_args_new)
                 {
                   try
                   {
                     System.Environment.SetEnvironmentVariable("COVERAGESCANNER_ARGS", coveragescanner_args_new);
                     if (coveragescanner_args_new == "")
                       Log("COVERAGESCANNER_ARGS system variable is unset");
                     else
                       Log("COVERAGESCANNER_ARGS system variable is set to '" + coveragescanner_args_new + "'");
                     ShowMessageBox(
                       "The code coverage settings are modified for this session\n" +
                       "Do not forget to rebuild the entire application",
                      "Code Coverage Setting");
                   }
                   catch
                   {
                     ShowMessageBox(
                       "Setting environment varible COVERAGESCANNER_ARGS failed",
                      "Code Coverage Setting");
                   }
                 }
               }
               catch (Exception e)
               {
                  Debug(e);
                  ShowMessageBox("Error creating the configuration", "Error");
               }
               handled = true;
               return;
            }
         }
      }

    public void Log(string s)
    {
      Debug("LOG:" + s);
      try
      {
        if (_outputWindowPane == null)
        {
          try
          {
            OutputWindow outputWindow = (OutputWindow)_applicationObject.Windows.Item(Constants.vsWindowKindOutput).Object;
            _outputWindowPane = outputWindow.OutputWindowPanes.Item("TestCocoon");
          }
          catch (Exception e)
          {
            Debug(e);
            if (_outputWindowPane == null)
            {
              OutputWindow outputWindow = (OutputWindow)_applicationObject.Windows.Item(Constants.vsWindowKindOutput).Object;
              _outputWindowPane = outputWindow.OutputWindowPanes.Add("TestCocoon");
            }
          }
        }
        if (_outputWindowPane != null)
        {
          _outputWindowPane.OutputString(s + "\n");
        }
      }
      catch { }
    }

    public void Debug(Exception e)
    {
      string s = "EXCEPTION: ";
      s += e.Message;
      Debug(s);
    }

    public void ShowMessageBox(string text, string title)
    {
      Debug("MESSAGEBOX: title:" + title + " text:" + text);
      MessageBox.Show(text, title);
    }

    public void Debug(string ss)
    {
      try
      {
        string s = ss + "\t" + Trace.GetTrace() + "\r\n";
        if (_debugFileInfo == null)
        {
          string testcocoon = System.Environment.GetEnvironmentVariable("TESTCOCOON");
          if (testcocoon == null)
            return;
          string debugFileName = testcocoon + "\\logfiles";
          try
          {
            Directory.CreateDirectory(debugFileName);
          }
          catch { }
          debugFileName = debugFileName + "\\vsaddin.log";
          _debugFileInfo = new FileInfo(debugFileName);
          if (_debugFileInfo == null)
            return;
          _debugFileStream = _debugFileInfo.Create();
        }
        byte[] t = new UTF8Encoding(true).GetBytes(s);
        _debugFileStream.Write(t, 0, t.Length);
        _debugFileStream.Flush();
      }
      catch { }
    }

    public OutputWindowPane _outputWindowPane;
    private FileStream _debugFileStream = null;
    private FileInfo _debugFileInfo = null;
    public DTE2 _applicationObject;
    public AddIn _addInInstance;


    public class Trace
    {
      static string BaseName(string name, char ch)
      {
        int index = name.LastIndexOf(ch);
        if (index == -1) return name;
        return name.Substring(index + 1);
      }


      public static string GetTrace()
      {
        System.Diagnostics.StackTrace trace = new System.Diagnostics.StackTrace(2, true);
        System.Diagnostics.StackFrame frame;
        MethodBase meth;

        string TraceText = String.Empty;
        System.Diagnostics.StackFrame HotFrame = null;

        // Get the start
        int start = 0;
        for (int i = 0; i < trace.FrameCount; i++)
        {
          frame = trace.GetFrame(i);
          meth = frame.GetMethod();

          if (meth == null) continue;

          string className = meth.DeclaringType.Name;
          if (className == "Debug" || className == "Trace")
            start = i + 1;
        }

        System.Text.StringBuilder sb = new System.Text.StringBuilder();

        bool first = true;
        for (int i = start; i < trace.FrameCount; i++)
        {
          if (!first)
            sb.Append(",");
          first = false;
          frame = trace.GetFrame(i);
          meth = frame.GetMethod();

          if (meth == null) continue;

          if (i == start)
            HotFrame = frame;


          string filename = frame.GetFileName();
          if (filename != null)
            sb.AppendFormat("{0}:{1}",
                  BaseName(filename, '\\'), frame.GetFileLineNumber());
          sb.Append("[");
          sb.Append(GetMethodCall(meth));
          sb.Append("]");
        }


        TraceText = sb.ToString();
        return TraceText;
      }

      private static string GetMethodCall(MethodBase meth)
      {
        StringBuilder sb = new StringBuilder();
        sb.AppendFormat("{0}.{1}(",
              meth.DeclaringType.Name,
              meth.Name);

        ParameterInfo[] param = meth.GetParameters();
        for (int j = 0; j < param.Length; j++)
        {
          ParameterInfo cur = param[j];
          if (j != 0) sb.Append(", ");
          sb.AppendFormat("{0}", cur.ParameterType.Name);
        }

        sb.Append(")");
        return sb.ToString();
      }
    }
  }
}
