#include "page1.h"
#include "page5.h"
#include "ui_page5.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    page5 w;
    w.show();
    return a.exec();
}
