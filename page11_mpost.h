#ifndef PAGE11_MPOST_H
#define PAGE11_MPOST_H

#include <QMainWindow>

namespace Ui {
class page11_Mpost;
}

class page11_Mpost : public QMainWindow
{
    Q_OBJECT

public:
    explicit page11_Mpost(QWidget *parent = nullptr);
    ~page11_Mpost();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::page11_Mpost *ui;
};

#endif // PAGE11_MPOST_H
