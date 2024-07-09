#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

namespace Ui {
class page5;
}

class page5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit page5(QWidget *parent = nullptr);
    ~page5();

private slots:

private:
    Ui::page5 *ui;
};

#endif // HOME_H
