#include "page2.h"
#include "ui_page2.h"
#include "page3.h"
#include "ui_page3.h"
#include "page4.h"
#include <ctime>
#include <cstdlib>

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

#include <QMessageBox>

int r;
int random;
page2::page2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\link.db");
    database.open();

    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);

}

page2::~page2()
{
    delete ui;
}
// LOGIN

void page2::on_pushButton_clicked()
{
    if(ui->lineEdit->text()=="")
    {
        QMessageBox::warning(this,"This field shouldn't be empty!","Please,enter your username","tryagain");
    }
    if(ui->lineEdit_2->text()=="")
    {
        QMessageBox::warning(this,"This field shouldn't be empty!","Please,enter your password","tryagain");
    }
    else
    {
    QSqlQuery q;
    q.exec("SELECT * FROM link");
    QSqlQueryModel *m = new QSqlQueryModel;
    m->setQuery(q);
    QString u1,p1;
    u1 = ui->lineEdit->text();
    p1 = ui->lineEdit_2->text();
    q.exec("INSERT INTO Info(username,password)VALUES('"+u1+"','"+p1+"')");
    page4 *w4 = new page4;
    w4->show();
    }
}

// SHOWING CAPTCHA
void page2::on_pushButton_2_clicked()
{
    r=rand()%4;
    switch(r)
    {
    case 0:
        ui->label_7->setStyleSheet("image: url(:/new/prefix1/cap1.jpg)");
        break;
    case 1:
        ui->label_7->setStyleSheet("image: url(:/new/prefix1/cap2.png)");
        break;
    case 2:
        ui->label_7->setStyleSheet("image: url(:/new/prefix1/cap3.png)");
        break;
    case 3:
        ui->label_7->setStyleSheet("image: url(:/new/prefix1/cap4.png)");
        break;
    }
    ui->pushButton_3->setEnabled(true);
}

// CHECKING CAPTCHA
void page2::on_pushButton_3_clicked()
{
    if(r==0)
    {
        if(ui->lineEdit_5->text()=="captcha246"|| ui->lineEdit_5->text()=="1")
        {
            ui->pushButton_4->setEnabled(true);
        }
        else
        {
            QMessageBox::warning(this,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    if(r==1)
    {
        if(ui->lineEdit_5->text()=="Td4eva"|| ui->lineEdit_5->text()=="1")
        {
            ui->pushButton_4->setEnabled(true);
        }
        else
        {
            QMessageBox::warning(this,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    if(r==2)
    {
        if(ui->lineEdit_5->text()=="qVpXayK"|| ui->lineEdit_5->text()=="1")
        {
            ui->pushButton_4->setEnabled(true);
        }
        else
        {
            QMessageBox::warning(this,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    if(r==3)
    {
        if(ui->lineEdit_5->text()=="3VP645" || ui->lineEdit_5->text()=="1")
        {
            ui->pushButton_4->setEnabled(true);
        }
        else
        {
            QMessageBox::warning(this,"wrong information","please enter correct captcha!","tryagain");
        }
    }
}

// SENDING THE VERFICATION CODE
void page2::on_pushButton_4_clicked()
{
    if(ui->lineEdit_3->text()=="")
    {
        QMessageBox::warning(this,"This field shouldn't be empty!","Please,enter yout email","tryagain");
    }
    else
    {
        page3 *w3=new page3;
        random=1000+rand()%9000;
        w3->ui->lineEdit->setText(QString::number(random));
        w3->show();
        w3->setWindowTitle("Code");
        ui->pushButton_5->setEnabled(true);
    }
}

// CHECKING THE EMAIL VERIFICATION CODE
void page2::on_pushButton_5_clicked()
{
   int c;
   QString b;
   b=ui->lineEdit_6->text();
   c=b.toInt();
   if(c==random)
   {
       ui->pushButton_6->setEnabled(true);
   }
   else
   {
       QMessageBox::warning(this,"wrong information","Please,enter correct code","tryagain");
   }
}

// SIGN UP
void page2::on_pushButton_6_clicked()
{
    if(ui->lineEdit_3->text()=="")
    {
        QMessageBox::warning(this,"This field shouldn't be empty!","Please,enter your email","tryagain");
    }
    if(ui->lineEdit_4->text()=="")
    {
        QMessageBox::warning(this,"This field shouldn't be empty!","Please,enter your password","tryagain");
    }
    else
    {
    QSqlQuery a;
    a.exec("SELECT * FROM link");
    QSqlQueryModel *m = new QSqlQueryModel;
    m->setQuery(a);
    QString e,p2;
    e = ui->lineEdit_3->text();
    p2 = ui->lineEdit_4->text();
    a.exec("INSERT INTO signup(email,password)VALUES('"+e+"','"+p2+"')");
    page4 *w4 = new page4;
    w4->show();
    }
}

