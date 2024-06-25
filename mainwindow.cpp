#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->rd_button->setText("Кнопка 1");
    ui->rd_button2->setText("Кнопка 2");
    for(int i = 1; i <= 10;i++){
    ui->cm_box->addItem(QString("%1").arg(i) );
    }
    ui->ph_bt->setText("Ok");
    ui->ph_bt->setCheckable(true);
    ui->pr_br->setMinimum(0);
    ui->pr_br->setMaximum(10);


    //ui->cm_box->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;

}

int val = 1;

void MainWindow::on_ph_bt_toggled(bool checked)
{
    if(ui->pr_br->value() == 10){
        ui->pr_br->setValue(0);
        val = 0;
    }

    ui->pr_br->setValue(val);
    val++;

}


void MainWindow::on_rd_button_pressed()
{

    ui->cm_box->setEnabled(false);

}


void MainWindow::on_rd_button2_pressed()
{
     ui->cm_box->setEnabled(true);
}



