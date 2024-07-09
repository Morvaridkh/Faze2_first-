#ifndef PAGE8_MESSAGING_H
#define PAGE8_MESSAGING_H

#include <QMainWindow>

namespace Ui {
class page8_messaging;
}

class page8_messaging : public QMainWindow
{
    Q_OBJECT

public:
    explicit page8_messaging(QWidget *parent = nullptr);
    ~page8_messaging();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::page8_messaging *ui;
};

#endif // PAGE8_MESSAGING_H
