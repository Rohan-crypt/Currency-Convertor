#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int Dollar = 83;
    int Euro = 89;
    int Pound = 104;

    QString uLocal =ui->lineEdit->text();
    int uLocal_int = uLocal.toInt();
    QString uInternational = ui->lineEdit_2->text();

    if(uInternational == "Dollar"){
        int result = uLocal_int/Dollar;
        QString result_str = QString::number(result);
        QMessageBox::information(this,"Currency Converter","Your currency is Equal to :"+result_str+" Dollar");
    }
    else if(uInternational == "Euro"){
        int result = uLocal_int/Euro;
        QString result_str = QString::number(result);
        QMessageBox::information(this,"Currency Converter","Your currency is Equal to :"+result_str+" Euro");
    }
    else if(uInternational == "Pound"){
        int result = uLocal_int/Pound;
        QString result_str = QString::number(result);
        QMessageBox::information(this,"Currency Converter","Your currency is Equal to :"+result_str+" Pound");
    }
    else{
        QMessageBox::information(this,"Error Message","Invalid international currency");
    }
}

