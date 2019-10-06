#include "mainwindow.h"
#include <QApplication>
#include "dlgbuchenstapel.h"
#include "dlgkostenstellen.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // init the other windows
    dlgBuchenStapel = new DlgBuchenStapel(&w);
    dlgKostenstellen = new DlgKostenstellen(&w);

    w.show();

    return a.exec();
}
