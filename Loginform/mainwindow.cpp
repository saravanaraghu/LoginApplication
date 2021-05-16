#include "mainwindow.h"
#include<QPushButton>
#include<QLineEdit>
#include<QMessageBox>
#include<QVBoxLayout>
#include<QDebug>
#include<QLabel>
#include<QFont>
#include<dialog.h>
#include<QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QLabel *l=new QLabel(this);
        l->setMinimumSize(150,300);
        l->move(30,15);
        QPixmap p("C:/Users/shruthi/OneDrive/Documents/build-Loginform-Desktop_Qt_6_0_2_MinGW_64_bit-Debug/login.png");
        l->setPixmap(p.scaled(20,20));

        QLabel *lb=new QLabel(this);
        lb->move(300,125);
        lb->setAlignment(Qt::AlignHCenter);
        QPixmap pi("C:/Users/shruthi/OneDrive/Documents/build-Loginform-Desktop_Qt_6_0_2_MinGW_64_bit-Debug/username.png");
        l->setPixmap(pi.scaled(20,20));

        QLabel *l1=new QLabel("UserName",this);
        l1->setMinimumSize(70,50);
        l1->move(130,50);
        QPalette pal;
        pal.setColor(QPalette::WindowText,Qt::red);
        l1->setPalette(pal);

        QLineEdit *le=new QLineEdit(this);
        le->setMinimumSize(200,50);
        le->move(220,50);
        le->setStyleSheet("border:2px solid red");

        QLabel *lp=new QLabel(this);
        lp->move(100,110);
        lp->setMinimumSize(200,50);
        QPixmap pix("C:/Users/shruthi/OneDrive/Documents/build-Loginform-Desktop_Qt_6_0_2_MinGW_64_bit-Debug/password.png");
        lp->setPixmap(pix.scaled(20,20));

        QLabel *pass=new QLabel("Password",this);
        pass->setMinimumSize(70,50);
        pass->move(130,110);
        QPalette pall;
        pall.setColor(QPalette::WindowText,Qt::green);
        pass->setPalette(pall);

        QLineEdit *lie=new QLineEdit(this);
        lie->setMinimumSize(200,50);
        lie->move(220,110);
        lie->setStyleSheet("border:2px solid green");

        QLabel *acc=new QLabel("Don't have an account",this);
        acc->setMinimumSize(150,50);
        acc->move(110,170);

        QFont button1("Times",8,QFont::Bold);
        QPushButton *btn1=new QPushButton("Sign Up",this);
        btn1->setFont(button1);
        btn1->move(220,180);
        connect(btn1,&QPushButton::clicked,[=](){
            Dialog *dialog=new Dialog(this);
            dialog->exec();
        });

        QFont button("Times",18,QFont::Bold);
            QPushButton *btn=new QPushButton("Login",this);
            btn->setFont(button);
            btn->move(220,280);
            connect(btn,&QPushButton::clicked,[=](){

                QString username=le->text();
                QString password=lie->text();
                if(username=="saravana"&& password=="raghu")
                {
                    QMessageBox::information(this,"Login","Login Successful!!");
                }
                else
                {
                    QMessageBox::information(this,"Login","Username or Password incorrect!");
                }
            });
           le->setPlaceholderText("username");
           lie->setPlaceholderText("password");
}

MainWindow::~MainWindow()
{
}
