#include "messaging.h"
#include "ui_messaging.h"

Messaging::Messaging(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Messaging)
{
    ui->setupUi(this);
}

Messaging::~Messaging()
{
    delete ui;
}
