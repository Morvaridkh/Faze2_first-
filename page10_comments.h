#ifndef PAGE10_COMMENTS_H
#define PAGE10_COMMENTS_H

#include <QMainWindow>

namespace Ui {
class page10_comments;
}

class page10_comments : public QMainWindow
{
    Q_OBJECT

public:
    explicit page10_comments(QWidget *parent = nullptr);
    ~page10_comments();

private:
    Ui::page10_comments *ui;
};

#endif // PAGE10_COMMENTS_H
