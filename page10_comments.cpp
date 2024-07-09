#include "page10_comments.h"
#include "ui_page10_comments.h"

page10_comments::page10_comments(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page10_comments)
{
    ui->setupUi(this);
}

page10_comments::~page10_comments()
{
    delete ui;
}
