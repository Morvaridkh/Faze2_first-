#ifndef PAGE6_MYNETWORKS_H
#define PAGE6_MYNETWORKS_H

#include <QMainWindow>

namespace Ui {
class page6_mynetworks;
}

class page6_mynetworks : public QMainWindow
{
    Q_OBJECT

public:
    explicit page6_mynetworks(QWidget *parent = nullptr);
    ~page6_mynetworks();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::page6_mynetworks *ui;
};

#endif // PAGE6_MYNETWORKS_H
