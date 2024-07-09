#ifndef PAGE6_MYNETWORK_H
#define PAGE6_MYNETWORK_H

#include <QMainWindow>

namespace Ui {
class page6MyNetwork;
}

class page6MyNetwork : public QMainWindow
{
    Q_OBJECT

public:
    explicit page6MyNetwork(QWidget *parent = nullptr);
    ~page6MyNetwork();

private:
    Ui::page6MyNetwork *ui;
};

#endif // PAGE6_MYNETWORK_H
