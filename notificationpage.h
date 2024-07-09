#ifndef NOTIFICATIONPAGE_H
#define NOTIFICATIONPAGE_H

#include <QWidget>

class NotificationPage : public QWidget
{
    Q_OBJECT

public:
    explicit NotificationPage(QWidget *parent = nullptr);

private:
    void createLayout();
};

#endif // NOTIFICATIONPAGE_H
