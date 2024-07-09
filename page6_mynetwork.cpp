#include "page6_mynetwork.h"
#include "ui_page6mynetwork.h"

page6MyNetwork::page6MyNetwork(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page6MyNetwork)
{
    ui->setupUi(this);
}

page6MyNetwork::~page6MyNetwork()
{
    delete ui;
}
