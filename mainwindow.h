#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_centralWidget_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_6_clicked();
    void on_actionStapelbuchen_2_triggered();
    void on_actionKostenstellen_2_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
