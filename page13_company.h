#ifndef PAGE13_COMPANY_H
#define PAGE13_COMPANY_H

#include <QMainWindow>

namespace Ui {
class page13_company;
}

class page13_company : public QMainWindow
{
    Q_OBJECT

public:
    explicit page13_company(QWidget *parent = nullptr);
    ~page13_company();

private:
    Ui::page13_company *ui;
};

#endif // PAGE13_COMPANY_H
