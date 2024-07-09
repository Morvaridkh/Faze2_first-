#ifndef PAGE9_ME_H
#define PAGE9_ME_H

#include <QMainWindow>

namespace Ui {
class page9_Me;
}

class page9_Me : public QMainWindow
{
    Q_OBJECT

public:
    explicit page9_Me(QWidget *parent = nullptr);
    ~page9_Me();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::page9_Me *ui;
};

#endif // PAGE9_ME_H
