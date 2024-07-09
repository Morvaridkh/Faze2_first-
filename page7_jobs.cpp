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

page7_jobs::page7_jobs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page7_jobs)
{
    ui->setupUi(this);
}

page7_jobs::~page7_jobs()
{
    delete ui;
}


void page7_jobs::on_pushButton_clicked()
{
    page5 *w1 = new page5;
    w1->show();
    this->hide();
}


void page7_jobs::on_pushButton_2_clicked()
{
    page6_mynetworks *w2 = new page6_mynetworks;
    w2->show();
    this->hide();
}


void page7_jobs::on_pushButton_3_clicked()
{
    page7_jobs *w3 = new page7_jobs;
    w3->show();
    this->hide();
}


void page7_jobs::on_pushButton_4_clicked()
{
    page8_messaging *w4 = new page8_messaging;
    w4->show();
    this->hide();
}


void page7_jobs::on_pushButton_6_clicked()
{
    page15_notification *w5 = new page15_notification;
    w5->show();
    this->hide();
}


void page7_jobs::on_pushButton_5_clicked()
{
    page9_Me *w6 = new page9_Me;
    w6->show();
    this->hide();
}


void page7_jobs::on_pushButton_7_clicked()
{
    Page1 *w7 = new Page1;
    w7->show();
    this->hide();
}

