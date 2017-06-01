#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <SemaforSBL.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_StartTSBL_clicked();

    void on_ZmwyjTSBL_clicked();

    void on_Zmiana1TSBL_clicked();

    void on_DrogaTSBL_clicked();

    void on_Zmiana2TSBL_clicked();

    void on_Zmiana3TSBL_clicked();

    void on_ZmwjaTSBL_clicked();

//    void on_ResetTSBL_clicked();

    void on_StartDSBL_clicked();

    void on_ZmwyjDSBL_clicked();

    void on_Zmiana1DSBL_clicked();

    void on_DrogaDSBL_clicked();

    void on_Zmiana2DSBL_clicked();

    void on_Zmiana3DSBL_clicked();

    void on_ZmwjaDSBL_clicked();

//    void on_ResetDSBL_clicked();

    void on_StartCSBL_clicked();

    void on_ZmwyjCSBL_clicked();

    void on_Zmiana1CSBL_clicked();

    void on_Zmiana2CSBL_clicked();

    void on_Zmiana3CSBL_clicked();

    void on_ZmwjaCSBL_clicked();

//    void on_ResetCSBL_clicked();

private:
    Ui::MainWindow *ui;
    SemaforSBL *semafor1;
    SemaforSBL *semafor2;
    SemaforSBL *semafor3;
    SemaforSBL *semafor4;
    SemaforSBL *semafor5;

};

#endif // MAINWINDOW_H
