#ifndef DLGBUCHENSTAPEL_H
#define DLGBUCHENSTAPEL_H

#include <QDialog>

namespace Ui {
class DlgBuchenStapel;
}

class DlgBuchenStapel : public QDialog
{
    Q_OBJECT

public:
    explicit DlgBuchenStapel(QWidget *parent = nullptr);
    ~DlgBuchenStapel();

private:
    Ui::DlgBuchenStapel *ui;
};

extern DlgBuchenStapel *dlgBuchenStapel;

#endif // DLGBUCHENSTAPEL_H
