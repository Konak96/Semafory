#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "SemaforSBL.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->semafor1 = new SemaforSBL();
    this->semafor2 = new SemaforSBL();
    this->semafor3 = new SemaforSBL();
    this->semafor4 = new SemaforSBL();
    this->semafor5 = new SemaforSBL();

    ui->setupUi(this);

/*WYBOR SEMAFORA
    DSBL - dwustawna samoczynna blokada liniowa
    TSBL - trzystawna samoczynna blokada liniowa
    CSBL - czterostawna samoczynna blokada liniowa*/

    /*DSBL USTAWIENIE SEMAFOROW POCZATKOWYCH*/
    /*semafor2->setStan(SemaforSBL::ZIELONY);
    semafor3->setStan(SemaforSBL::ZIELONY);
    semafor4->setStan(SemaforSBL::ZIELONY);*/

    /*TSBL USTAWIENIE SEMAFOROW POCZATKOWYCH*/
    semafor2->setStan(SemaforSBL::ZIELONY);
    semafor3->setStan(SemaforSBL::ZIELONY);
    semafor4->setStan(SemaforSBL::POMARANCZOWY);

    /*CSBL USTAWIENIE SEMAFOROW POCZATKOWYCH*/
    /*semafor2->setStan(SemaforSBL::ZIELONY);
    semafor3->setStan(SemaforSBL::ZIELONYMIG);
    semafor4->setStan(SemaforSBL::POMARANCZOWY);*/
}

MainWindow::~MainWindow()
{
    delete semafor1;
    delete semafor2;
    delete semafor3;
    delete semafor4;
    delete semafor5;
    delete ui;
}


void MainWindow::on_StartDSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 2 &&
            semafor5->getStan() == 0)
    {
        ui->Sem11DSBL->setChecked(false);
        semafor1->setStan(SemaforSBL::ZIELONY);
        ui->Sem12DSBL->setChecked(true);
    }
}

void MainWindow::on_ZmwyjDSBL_clicked()
{
    if(semafor1->getStan() == 2 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 2 &&
            semafor5->getStan() == 0)
    {
        ui->Sem12DSBL->setChecked(false);
        semafor1->setStan(SemaforSBL::CZERWONY);
        ui->Sem11DSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana1DSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 2 &&
            semafor5->getStan() == 0)
    {
        ui->Sem22DSBL->setChecked(false);
        semafor2->setStan(SemaforSBL::CZERWONY);
        ui->Sem21DSBL->setChecked(true);
    }
}

void MainWindow::on_DrogaDSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 0 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 2 &&
            semafor5->getStan() == 0)
    {
        semafor5->setStan(SemaforSBL::ZIELONY);
        ui->Sem51DSBL->setChecked(false);
        ui->Sem52DSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana2DSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 0 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 2 &&
            semafor5->getStan() == 2)
    {
        semafor2->setStan(SemaforSBL::ZIELONY);
        semafor3->setStan(SemaforSBL::CZERWONY);
        ui->Sem21DSBL->setChecked(false);
        ui->Sem22DSBL->setChecked(true);
        ui->Sem32DSBL->setChecked(false);
        ui->Sem31DSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana3DSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 0 &&
            semafor4->getStan() == 2 &&
            semafor5->getStan() == 2)
    {
        semafor3->setStan(SemaforSBL::ZIELONY);
        semafor4->setStan(SemaforSBL::CZERWONY);
        ui->Sem31DSBL->setChecked(false);
        ui->Sem32DSBL->setChecked(true);
        ui->Sem41DSBL->setChecked(true);
        ui->Sem42DSBL->setChecked(false);
    }
}

void MainWindow::on_ZmwjaDSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 0 &&
            semafor5->getStan() == 2)
    {
        semafor4->setStan(SemaforSBL::ZIELONY);
        semafor5->setStan(SemaforSBL::CZERWONY);
        ui->Sem41DSBL->setChecked(false);
        ui->Sem42DSBL->setChecked(true);
        ui->Sem52DSBL->setChecked(false);
        ui->Sem51DSBL->setChecked(true);
    }
}

void MainWindow::on_StartTSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 1 &&
            semafor5->getStan() == 0)
    {
        ui->Sem11TSBL->setChecked(false);
        semafor1->setStan(SemaforSBL::ZIELONY);
        ui->Sem13TSBL->setChecked(true);
    }
}

void MainWindow::on_ZmwyjTSBL_clicked()
{
    if(semafor1->getStan() == 2 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 1 &&
            semafor5->getStan() == 0)
    {
        ui->Sem13TSBL->setChecked(false);
        semafor1->setStan(SemaforSBL::CZERWONY);
        ui->Sem11TSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana1TSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 1 &&
            semafor5->getStan() == 0)
    {
        ui->Sem23TSBL->setChecked(false);
        semafor2->setStan(SemaforSBL::CZERWONY);
        ui->Sem21TSBL->setChecked(true);
    }
}

void MainWindow::on_DrogaTSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 0 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 1 &&
            semafor5->getStan() == 0)
    {
        semafor4->setStan(SemaforSBL::ZIELONY);
        semafor5->setStan(SemaforSBL::POMARANCZOWY);
        ui->Sem42TSBL->setChecked(false);
        ui->Sem43TSBL->setChecked(true);
        ui->Sem51TSBL->setChecked(false);
        ui->Sem52TSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana2TSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 0 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 2 &&
            semafor5->getStan() == 1)
    {
        semafor2->setStan(SemaforSBL::POMARANCZOWY);
        semafor3->setStan(SemaforSBL::CZERWONY);
        ui->Sem21TSBL->setChecked(false);
        ui->Sem22TSBL->setChecked(true);
        ui->Sem33TSBL->setChecked(false);
        ui->Sem31TSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana3TSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 1 &&
            semafor3->getStan() == 0 &&
            semafor4->getStan() == 2 &&
            semafor5->getStan() == 1)
    {
        semafor2->setStan(SemaforSBL::ZIELONY);
        semafor3->setStan(SemaforSBL::POMARANCZOWY);
        semafor4->setStan(SemaforSBL::CZERWONY);
        ui->Sem22TSBL->setChecked(false);
        ui->Sem23TSBL->setChecked(true);
        ui->Sem31TSBL->setChecked(false);
        ui->Sem32TSBL->setChecked(true);
        ui->Sem43TSBL->setChecked(false);
        ui->Sem41TSBL->setChecked(true);
    }
}

void MainWindow::on_ZmwjaTSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 1 &&
            semafor4->getStan() == 0 &&
            semafor5->getStan() == 1)
    {
        semafor3->setStan(SemaforSBL::ZIELONY);
        semafor4->setStan(SemaforSBL::POMARANCZOWY);
        semafor5->setStan(SemaforSBL::CZERWONY);
        ui->Sem32TSBL->setChecked(false);
        ui->Sem33TSBL->setChecked(true);
        ui->Sem41TSBL->setChecked(false);
        ui->Sem42TSBL->setChecked(true);
        ui->Sem52TSBL->setChecked(false);
        ui->Sem51TSBL->setChecked(true);
    }
}

void MainWindow::on_StartCSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 3 &&
            semafor4->getStan() == 1 &&
            semafor5->getStan() == 0)
    {
        ui->Sem11CSBL->setChecked(false);
        semafor1->setStan(SemaforSBL::ZIELONY);
        ui->Sem14CSBL->setChecked(true);
    }
}
void MainWindow::on_ZmwyjCSBL_clicked()
{
    if(semafor1->getStan() == 2 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 3 &&
            semafor4->getStan() == 1 &&
            semafor5->getStan() == 0)
    {
        ui->Sem14CSBL->setChecked(false);
        semafor1->setStan(SemaforSBL::CZERWONY);
        ui->Sem11CSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana1CSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 2 &&
            semafor3->getStan() == 3 &&
            semafor4->getStan() == 1 &&
            semafor5->getStan() == 0)
    {
        semafor2->setStan(SemaforSBL::CZERWONY);
        semafor3->setStan(SemaforSBL::ZIELONY);
        semafor4->setStan(SemaforSBL::ZIELONYMIG);
        semafor5->setStan(SemaforSBL::POMARANCZOWY);
        ui->Sem21CSBL->setChecked(true);
        ui->Sem24CSBL->setChecked(false);
        ui->Sem34CSBL->setChecked(true);
        ui->Sem33CSBL->setChecked(false);
        ui->Sem42CSBL->setChecked(false);
        ui->Sem43CSBL->setChecked(true);
        ui->Sem51CSBL->setChecked(false);
        ui->Sem52CSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana2CSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 0 &&
            semafor3->getStan() == 2 &&
            semafor4->getStan() == 3 &&
            semafor5->getStan() == 1)
    {
        semafor2->setStan(SemaforSBL::POMARANCZOWY);
        semafor3->setStan(SemaforSBL::CZERWONY);
        ui->Sem21CSBL->setChecked(false);
        ui->Sem22CSBL->setChecked(true);
        ui->Sem34CSBL->setChecked(false);
        ui->Sem31CSBL->setChecked(true);
    }
}

void MainWindow::on_Zmiana3CSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 1 &&
            semafor3->getStan() == 0 &&
            semafor4->getStan() == 3 &&
            semafor5->getStan() == 1)
    {
        semafor2->setStan(SemaforSBL::ZIELONYMIG);
        semafor3->setStan(SemaforSBL::POMARANCZOWY);
        semafor4->setStan(SemaforSBL::CZERWONY);
        ui->Sem22CSBL->setChecked(false);
        ui->Sem23CSBL->setChecked(true);
        ui->Sem31CSBL->setChecked(false);
        ui->Sem32CSBL->setChecked(true);
        ui->Sem43CSBL->setChecked(false);
        ui->Sem41CSBL->setChecked(true);
    }
}

void MainWindow::on_ZmwjaCSBL_clicked()
{
    if(semafor1->getStan() == 0 &&
            semafor2->getStan() == 3 &&
            semafor3->getStan() == 1 &&
            semafor4->getStan() == 0 &&
            semafor5->getStan() == 1)
    {
        semafor2->setStan(SemaforSBL::ZIELONY);
        semafor3->setStan(SemaforSBL::ZIELONYMIG);
        semafor4->setStan(SemaforSBL::POMARANCZOWY);
        semafor5->setStan(SemaforSBL::CZERWONY);
        ui->Sem23CSBL->setChecked(false);
        ui->Sem24CSBL->setChecked(true);
        ui->Sem32CSBL->setChecked(false);
        ui->Sem33CSBL->setChecked(true);
        ui->Sem41CSBL->setChecked(false);
        ui->Sem42CSBL->setChecked(true);
        ui->Sem52CSBL->setChecked(false);
        ui->Sem51CSBL->setChecked(true);
    }
}
