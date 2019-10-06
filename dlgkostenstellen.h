#ifndef DLGKOSTENSTELLEN_H
#define DLGKOSTENSTELLEN_H

#include <QDialog>

namespace Ui {
class DlgKostenstellen;
}

class DlgKostenstellen : public QDialog
{
    Q_OBJECT

public:
    explicit DlgKostenstellen(QWidget *parent = nullptr);
    ~DlgKostenstellen();

private:
    Ui::DlgKostenstellen *ui;
};

extern DlgKostenstellen *dlgKostenstellen;

#endif // DLGKOSTENSTELLEN_H
