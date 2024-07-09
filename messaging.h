#ifndef MESSAGING_H
#define MESSAGING_H

#include <QMainWindow>

namespace Ui {
class Messaging;
}

class Messaging : public QMainWindow
{
    Q_OBJECT

public:
    explicit Messaging(QWidget *parent = nullptr);
    ~Messaging();

private:
    Ui::Messaging *ui;
};

#endif // MESSAGING_H
