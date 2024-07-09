#ifndef PAGE14_VIEWPROFILE_H
#define PAGE14_VIEWPROFILE_H

#include <QMainWindow>

namespace Ui {
class page14_viewprofile;
}

class page14_viewprofile : public QMainWindow
{
    Q_OBJECT

public:
    explicit page14_viewprofile(QWidget *parent = nullptr);
    ~page14_viewprofile();

private:
    Ui::page14_viewprofile *ui;
};

#endif // PAGE14_VIEWPROFILE_H
