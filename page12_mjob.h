#ifndef PAGE12_MJOB_H
#define PAGE12_MJOB_H

#include <QMainWindow>

namespace Ui {
class page12_mjob;
}

class page12_mjob : public QMainWindow
{
    Q_OBJECT

public:
    explicit page12_mjob(QWidget *parent = nullptr);
    ~page12_mjob();

private:
    Ui::page12_mjob *ui;
};

#endif // PAGE12_MJOB_H
