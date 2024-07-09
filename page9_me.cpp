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
#include <QFileDialog>
#include <QMessageBox>

page9_Me::page9_Me(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page9_Me)
{
    ui->setupUi(this);
}

page9_Me::~page9_Me()
{
    delete ui;
}

void page9_Me::on_pushButton_clicked()
{
    page5 *w1 = new page5;
    w1->show();
    this->hide();
}


void page9_Me::on_pushButton_2_clicked()
{
    page6_mynetworks *w2 = new page6_mynetworks;
    w2->show();
    this->hide();
}


void page9_Me::on_pushButton_3_clicked()
{
    page7_jobs *w3 = new page7_jobs;
    w3->show();
    this->hide();
}


void page9_Me::on_pushButton_4_clicked()
{
    page8_messaging *w4 = new page8_messaging;
    w4->show();
    this->hide();
}


void page9_Me::on_pushButton_6_clicked()
{
    page15_notification *w5 = new page15_notification;
    w5->show();
    this->hide();
}


void page9_Me::on_pushButton_5_clicked()
{
    page9_Me *w6 = new page9_Me;
    w6->show();
    this->hide();
}


void page9_Me::on_pushButton_7_clicked()
{
    Page1 *w7 = new Page1;
    w7->show();
    this->hide();
}


void page9_Me::on_pushButton_8_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                this,
            tr("Open File"),
            "C://",
            "All File (*.*);;JPG File (*.jpg);;PNG File (*.png)"
                );
    if(QString::compare(filename,QString()) !=0)
    {
        QImage image;
        bool valid = image.load(filename);

        if(valid)
        {
            image = image.scaledToWidth(ui->label_2->width(),Qt::SmoothTransformation);
            ui->label_2->setPixmap(QPixmap::fromImage(image));
        }
     QMessageBox::information(this,tr("Update Result"),tr("<font color=black>Profile Photo Update Completed"));
    }
}

