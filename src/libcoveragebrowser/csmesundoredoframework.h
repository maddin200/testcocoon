/****************************************************************************
 **
 ** Copyright (C) see AUTHORS included in the packaging of this file.
 **                ---   All rights reserved ---
 **
 ** This file may be distributed and/or modified under the terms of the
 ** GNU General Public License version 2 as published by the Free Software
 ** Foundation and appearing in the file LICENSE.TXT included in the
 ** packaging of this file.
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ** Contact info@testcocoon.org if any conditions of this licensing are
 ** not clear to you.
 **
 ****************************************************************************/

#ifndef CSMES_UNDO_H
#define CSMES_UNDO_H
#include "csmes.h"
#include <QObject>
#include <QUndoStack>
class WMain;
#include <QUndoCommand>

class CSMesUndoRedoFramework : public QObject,public CSMes
{
   Q_OBJECT
  public:
    CSMesUndoRedoFramework(WMain *);
    virtual ~CSMesUndoRedoFramework();

    void setManuallyValidated(const ModuleFile& mod,const SourceFile & src,int index,bool b);
    bool setExecutionComment(const ExecutionName &name, const QString &comment) ;
    bool deleteExecution(const ExecutionName &) ;
    bool renameExecution(const ExecutionName &old_name,const ExecutionName &new_name) ;
    bool renameExecutionPath(const ExecutionName &old_name,const ExecutionName &new_name) ;
    bool deleteExecution(const ExecutionNames &ms);
    bool deleteExecutionPath(const QString &) ;
    bool mergeExecutions(const ExecutionNames &sources,const ExecutionName &dest);
    void setExecutionStatus(const ExecutionName &name,Executions::execution_status_t); 
    void setExecutionStatusStr(const ExecutionName &name,const QString &execution_status) ; 
    bool loadCSMes(const QString &file);
    bool loadCSExe(const QString &file,const ExecutionName &name,csexe_import_policy_t,Executions::execution_status_t,ExecutionNames &new_executions,QString &info,QString &short_status,bool use_undo,progress_function_t progress);
    bool loadCSExe(const QByteArray &data,const ExecutionName &name,csexe_import_policy_t,Executions::execution_status_t,ExecutionNames &new_executions,QString &info,QString &short_status,bool use_undo,progress_function_t progress);
    bool loadCSExe(QIODevice &data,const ExecutionName &name,csexe_import_policy_t,Executions::execution_status_t,ExecutionNames &new_executions,QString &info,QString &short_status,bool use_undo,progress_function_t progress);
    bool mergeCSMes(const QString &s,CSMESFile::merge_policy_t policy);
    bool saveCSMes();
    void closeCSMes();
    void clear();
    bool setComment(const ModuleFile& module,const SourceFile &source,int instrument_index,const QString &comment);
    void undo();
    void redo();
    QUndoStack *undoStack() const { return undo_stack_p ; }
    void beginUndoGroup(const QString &description);
    void endUndoGroup(const QString &description=QString());
    void clearUndoStack();

    bool selectExecutionsComparaison(const ExecutionNames &ms,const ExecutionNames &comparaison,bool test_coverage_mode, int coverage_level,Instrumentation::coverage_method_t method, CSMes::comparaison_mode_t m, bool execution_analysis_mode) ;
  private:
    QUndoStack *undo_stack_p;
    int number_of_undo_group_call;
    QUndoCommand *undo_group_p;
    inline QUndoCommand *undoStackInsertItem();
    int number_of_undo_group_children;
    inline void pushUndoItem(QUndoCommand *c);
    void insert_execution_undo_stack(const ExecutionNames &new_executions);
    WMain *m_wmain_p;
 private slots:
    void undoRedoPerformed();
} ;
#endif
