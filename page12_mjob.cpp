#include "page12_mjob.h"
#include "ui_page12_mjob.h"
page12_mjob::page12_mjob(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page12_mjob)
{
    ui->setupUi(this);
}

page12_mjob::~page12_mjob()
{
    delete ui;
}
