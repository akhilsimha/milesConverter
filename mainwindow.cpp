#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double miles = 1.60934;
    QString uMiles = ui->lineEdit->text();
    double uMiles_double = uMiles.toDouble();

    double kms = uMiles_double * miles;
    QString uKms = QString::number(kms);
    ui->lineEdit_2->setText(uKms);

}

