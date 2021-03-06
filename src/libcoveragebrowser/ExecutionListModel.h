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

#ifndef EXECUTION_LIST_MODEL_H
#define EXECUTION_LIST_MODEL_H
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include <QStringList>
#include <QList>
#include "instrumentation.h"
#include "CoverageSettings.h"
#include "TreeListModel.h"
#include "csmes.h"

class TreeList;
class CSMesUndoRedoFramework;
#define EXECUTION_LIST_COLUMN_NAME 0
#define EXECUTION_LIST_COLUMN_STATISTIC 1
#define EXECUTION_LIST_COLUMN_STATE 2
#define EXECUTION_LIST_COLUMN_COMMENT 3
#define EXECUTION_LIST_COLUMN_MAX 4

class ExecutionListModel : public  TreeListModel
{
    Q_OBJECT

public:
    ExecutionListModel(QObject *parent = 0);
    void setCSMes(CSMesUndoRedoFramework *);
    virtual ~ExecutionListModel();

    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;

    bool setData(const QModelIndex &index, const QVariant &value, int role);
    bool deleteIndex(const QModelIndex &index);
    bool renameIndex(const QModelIndex &index,const ExecutionName &name);
    QString executionName(const QModelIndex &,bool execution_only=true) const;
    void Select(const QString &pattern,bool comments, bool no_comments, bool unknown, bool passed, bool failed, bool check_manually);
    void DeSelect(const QString &pattern,bool comments, bool no_comments, bool unknown, bool passed, bool failed, bool check_manually);
    void Comparaison( const QModelIndexList & v);
    bool renameExecution(const ExecutionName &old_name,const ExecutionName &new_name);
    bool deleteExecution(const ExecutionName &name);
    bool deleteExecution(const ExecutionNames &names);
    bool mergeExecutions(const ExecutionNames &executions,const ExecutionName &name);
    bool setExecutionComment (const QModelIndex &index,const QString &comment);
    void refresh();
    void setFilter( bool comments, bool no_comments, bool unknown, bool passed, bool failed, bool check_manually) ;
    void selectComparaison( const ExecutionNames& selection_list, const ExecutionNames &comparaison_list,bool test_coverage_mode,Instrumentation::coverage_method_t, bool execution_comparaison_mode, CSMes::comparaison_mode_t, int coverage_level);

signals:
    void updateGUI();

private:
    static void updateGroupItems(const TreeList *rootItem,const ExecutionNames &selected_executions,TreeList *e) ;
    void getAllExecutions(const TreeList *e,ExecutionNames &execs) const;
    static  QString executionName(const TreeList *_rootItem,const TreeList *e,bool execution_only) ;
    void setupModelData();
    CSMesUndoRedoFramework *csmes_p;
    ExecutionNames executionList;
    static inline TreeList * insertExecution (TreeList *_rootItem,const ExecutionNames &selected_executions,const ExecutionName &name) ;

    TreeList * executionTreeList(const ExecutionName &name) const;
    void invalidateStatisticsFromParents(TreeList *item_p);
    void stopBackgroundCalculation();
    TreeList * executionTreeList(const ExecutionNames &names) const;
    QList<TreeList *> executionTreeLists(const ExecutionNames &names) const;
    bool filter_comment;
    bool filter_no_comment;
    bool filter_unknown;
    bool filter_passed;
    bool filter_failed;
    bool filter_check_manually;
    static inline TreeList *findExecution(const TreeList *parent_p,const QString &name_no_scope) ;
  
    void recalculateStatistics();
    void recalculateStatistics(QModelIndex );
    static TreeList *generateRootItem(const ExecutionNames &execution_list,const ExecutionNames &selected_executions); 
    bool updateModelData();
    inline bool updateModelDataRemoveObselete(const TreeList *newRootItem,TreeList *_Item) ;
    inline bool updateModelDataInsertItems(const TreeList *newRootItem, TreeList *_Item) ;
    inline void updateModelDataExecutionStatus(TreeList *item_p) ;
    void emitRefreshView() const;
    CoverageSettings last_settings;
  
  
 public slots:
    void statisticExecution(const ExecutionNames &,const ExecutionNames &, bool ,int,Instrumentation::coverage_method_t,CSMes::comparaison_mode_t, int,int) ;
    void refreshView();
};

#endif
