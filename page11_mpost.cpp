#include "page11_mpost.h"
#include "ui_page11_mpost.h"
#include "page5.h"
#include "ui_page5.h"
#include<QPushButton>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QFileDialog>
#include <QMessageBox>
page11_Mpost::page11_Mpost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page11_Mpost)
{
    ui->setupUi(this);
}

page11_Mpost::~page11_Mpost()
{
    delete ui;
}

void page11_Mpost::on_pushButton_clicked()
{
    //upload photo
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
     QMessageBox::information(this,tr("Update Result"),tr("<font color=black>Photo Update Completed"));
    }
}



void page11_Mpost::on_pushButton_3_clicked()
{
    page5 *w1 = new page5;
    w1->show();
    this->hide();
}


void page11_Mpost::on_pushButton_2_clicked()
{
    page5 *w1 = new page5;
    w1->show();
    this->hide();
}

