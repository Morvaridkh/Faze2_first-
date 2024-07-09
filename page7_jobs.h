#ifndef PAGE7_JOBS_H
#define PAGE7_JOBS_H

#include <QMainWindow>

namespace Ui {
class page7_jobs;
}

class page7_jobs : public QMainWindow
{
    Q_OBJECT

public:
    explicit page7_jobs(QWidget *parent = nullptr);
    ~page7_jobs();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::page7_jobs *ui;
};

#endif // PAGE7_JOBS_H
