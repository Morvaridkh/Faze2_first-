#ifndef 1_H
#define 1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Page1; }
QT_END_NAMESPACE

class Page1 : public QMainWindow
{
    Q_OBJECT

public:
    Page1(QWidget *parent = nullptr);
    ~Page1();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::Page1 *ui;
};
#endif // 1_H
