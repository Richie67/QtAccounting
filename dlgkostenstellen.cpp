#include "dlgkostenstellen.h"
#include "ui_dlgkostenstellen.h"

DlgKostenstellen::DlgKostenstellen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgKostenstellen)
{
    ui->setupUi(this);
}

DlgKostenstellen::~DlgKostenstellen()
{
    delete ui;
}


DlgKostenstellen *dlgKostenstellen = nullptr;
