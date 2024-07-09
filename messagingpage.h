#ifndef MESSAGINGPAGE_H
#define MESSAGINGPAGE_H

#include <QWidget>

class MessagingPage : public QWidget
{
    Q_OBJECT

public:
    explicit MessagingPage(QWidget *parent = nullptr);

private:
    void createLayout();
};

#endif // MESSAGINGPAGE_H
