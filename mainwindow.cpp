#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dlgbuchenstapel.h"
#include "dlgkostenstellen.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_centralWidget_customContextMenuRequested(const QPoint &pos)
{

}

void MainWindow::on_pushButton_6_clicked()
{
    // DlgBuchenStapel dlg;
    // dlg.setModal(true);
    // dlg.exec();
    dlgBuchenStapel->setModal(true);
    dlgBuchenStapel->show();
}


void MainWindow::on_actionStapelbuchen_2_triggered() {
    // DlgBuchenStapel dlg;
    // dlg.setModal(true);
    // dlg.exec();
    dlgBuchenStapel->setModal(true);
    dlgBuchenStapel->setParent(this);
    dlgBuchenStapel->show();
}

void MainWindow::on_actionKostenstellen_2_triggered() {
    dlgKostenstellen->setModal(true);
    dlgKostenstellen->show();
}

