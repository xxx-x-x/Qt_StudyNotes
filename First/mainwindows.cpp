#include "mainwindows.h"
#include<QDockWidget>
#include<QLabel>
#include<QMenu>
#include<QDebug>
#include<QMenuBar>
#include<QToolBar>
#include<QStatusBar>
#include<QTextEdit>

mainwindows::mainwindows(QWidget *parent) : QMainWindow(parent)
{
    this->resize(600,400);
    QMenuBar *Q1 = new QMenuBar(this);
    this->setMenuBar(Q1);
    QMenu *file = Q1->addMenu("File");
    QMenu *edit = Q1->addMenu("Edit");
    QMenu *build = Q1->addMenu("Build");

    file->addAction("open");
    file->addSeparator();
    file->addAction("include");
    edit->addAction("undo");
    edit->addAction("redo");
    build->addAction("build all");
    build->addAction("build project");

    QToolBar *QTb = new QToolBar(this);
    this->addToolBar(Qt::LeftToolBarArea,QTb);
    QTb->setFloatable(false);
    QTb->setMovable(true);
    QTb->addAction("new");
    QTb->addAction("old");

    QStatusBar *QstatusB = new QStatusBar(this);
    this->setStatusBar(QstatusB);
    QLabel *Qlabel1 = new QLabel("Tips",this);
//	QstatusB->addWidget(Qlabel1);
    QstatusB->addPermanentWidget(Qlabel1);

    QDockWidget *QdockW = new QDockWidget("flost",this);
    this->addDockWidget(Qt::BottomDockWidgetArea,QdockW);
    QdockW->setAllowedAreas(Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea);
    QTextEdit *Qtextt = new QTextEdit(this);
    this->setCentralWidget(Qtextt);
}
