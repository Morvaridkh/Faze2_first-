#include "page13_company.h"
#include "ui_page13_company.h"

page13_company::page13_company(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page13_company)
{
    ui->setupUi(this);
}

page13_company::~page13_company()
{
    delete ui;
}
