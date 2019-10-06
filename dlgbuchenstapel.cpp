#include "dlgbuchenstapel.h"
#include "ui_dlgbuchenstapel.h"

DlgBuchenStapel::DlgBuchenStapel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgBuchenStapel)
{
    ui->setupUi(this);
}

DlgBuchenStapel::~DlgBuchenStapel()
{
    delete ui;
}


DlgBuchenStapel *dlgBuchenStapel = nullptr;

