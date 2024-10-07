#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_C_clicked()
{
    ui->txt_output->clear();
    firstNum = 0;
    secondNum = 0;
}


void MainWindow::on_btn_7_clicked()
{
    if (operation == true){
        ui->txt_output->clear();
    }
    ui->txt_output->insertPlainText("7");
}




void MainWindow::on_btn_8_clicked()
{
    if (operation == true){
        ui->txt_output->clear();
    }
    ui->txt_output->insertPlainText("8");
}


void MainWindow::on_btn_9_clicked()
{
    if (operation == true){
        ui->txt_output->clear();
    }
    ui->txt_output->insertPlainText("9");
}


void MainWindow::on_txt_output_textChanged()
{
    secondNum = ui->txt_output->toPlainText().toInt();
}


void MainWindow::on_btn_plus_clicked()
{
    firstNum += secondNum;
    ui->txt_output->clear();
    ui->txt_output->setPlainText(QString::number(firstNum));
    operation = true;
}

