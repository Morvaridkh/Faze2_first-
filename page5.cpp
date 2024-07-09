#include "page5.h"
#include "ui_page5.h"
#include "page6_mynetworks.h"
#include "ui_page6_mynetworks.h"
#include "page8_messaging.h"
#include "ui_page8_messaging.h"
#include "page7_jobs.h"
#include "ui_page7_jobs.h"
#include "page9_me.h"
#include "ui_page9_me.h"
#include "page15_notification.h"
#include "ui_page15_notification.h"
#include "page1.h"
#include "ui_page1.h"
#include "page11_mpost.h"
#include "ui_page11_mpost.h"
#include <QApplication>
#include <QWidget>
#include <QScrollArea>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

page5::page5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page5)
{
    ui->setupUi(this);
    //scroll
    QVBoxLayout * layout = new QVBoxLayout(this);
        for (int i=0;i<50 ;++i )
        {
            QLabel *but = new QLabel("");
            layout->addWidget(but);
        }
        ui->scrollContents->setLayout(layout);
}

page5::~page5()
{
    delete ui;
}

// Home
void page5::on_pushButton_clicked()
{
    page5 *w1 = new page5;
    w1->show();
    this->hide();
}

// mynetworks
void page5::on_pushButton_2_clicked()
{
    page6_mynetworks *w2 = new page6_mynetworks;
    w2->show();
    this->hide();
}

// jobs
void page5::on_pushButton_3_clicked()
{
    page7_jobs *w3 = new page7_jobs;
    w3->show();
    this->hide();
}

// messaging
void page5::on_pushButton_4_clicked()
{
    page8_messaging *w4 = new page8_messaging;
    w4->show();
    this->hide();
}

// notoficiation
void page5::on_pushButton_6_clicked()
{
  page15_notification *w5 = new page15_notification;
  w5->show();
  this->hide();
}

// me
void page5::on_pushButton_5_clicked()
{
    page9_Me *w6 = new page9_Me;
    w6->show();
    this->hide();
}


void page5::on_pushButton_43_clicked()
{
    Page1 *w7 = new Page1;
    w7->show();
    this->hide();
}

//start a post
void page5::on_pushButton_8_clicked()
{
    page11_Mpost *w8=new page11_Mpost;
    w8->show();
    this->hide();
}

