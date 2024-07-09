#include "page14_viewprofile.h"
#include "ui_page14_viewprofile.h"

page14_viewprofile::page14_viewprofile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page14_viewprofile)
{
    ui->setupUi(this);
}

page14_viewprofile::~page14_viewprofile()
{
    delete ui;
}
