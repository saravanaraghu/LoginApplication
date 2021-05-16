#include "dialog.h"
#include "ui_dialog.h"
#include<QString>
#include<QLineEdit>
#include<QDebug>
#include<QApplication>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Confirm_clicked()
{
    QString email=ui->lineEdit->text();
    QString pass=ui->lineEdit_2->text();
    QString cpass=ui->lineEdit_3->text();
    qDebug()<<"Email:"<<email;
    qDebug()<<"Password:"<<pass;
    qDebug()<<"Confirm Password:"<<cpass;
    if(!email.isEmpty() && !pass.isEmpty() && !cpass.isEmpty())
          {

          }
    else
          {
              qDebug()<<"One field is empty!!";
          }
}

void Dialog::on_Exit_clicked()
{
    QApplication::quit();
}
