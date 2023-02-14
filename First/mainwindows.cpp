#include "mainwindows.h"
#include<QFont>
#include<QFontDialog>
#include<QFileDialog>
#include<QColorDialog>
#include<QMessageBox>
#include<QDialog>
#include<QAction>
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
    QAction *acNew = QTb->addAction("new");
    QAction *acOld = QTb->addAction("old");
    connect(acNew,&QAction::triggered,this,[=](){


//		  no modal
//        QDialog *qd1 = new QDialog(this);
//        qd1->resize(100,100);
//        qd1->show();
//        qd1->setAttribute(Qt::WA_DeleteOnClose);


        //modal
//        QDialog qd(this);
//        qd.resize(100,100);
//        qd.exec();


        //standard dialog
//        QMessageBox::critical(this,"title","please input");
//        QMessageBox::information(this,"title","please input");
//        QMessageBox::warning(this,"titil","input");
//        QMessageBox::question(this,"title","sure?",QMessageBox::Yes | QMessageBox::No,QMessageBox::Yes);

        //QcolorDialog
//        QColor Q1 = QColorDialog::getColor(QColor(255,0,0));
//        qDebug()<< Q1.red() << Q1.green() <<Q1.blue();

        //QfileDialog
//        QString dir = QFileDialog::getOpenFileName(this,"name","~/");
//        qDebug()<< dir;

        //QfontDialog
//        bool flag;
//        QFont f1 = QFontDialog::getFont(&flag,this);
//        qDebug()<< f1.family() ;
    });

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
