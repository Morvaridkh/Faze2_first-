#ifndef PAGE15_NOTIFICATION_H
#define PAGE15_NOTIFICATION_H

#include <QMainWindow>

namespace Ui {
class page15_notification;
}

class page15_notification : public QMainWindow
{
    Q_OBJECT

public:
    explicit page15_notification(QWidget *parent = nullptr);
    ~page15_notification();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::page15_notification *ui;
};

#endif // PAGE15_NOTIFICATION_H
