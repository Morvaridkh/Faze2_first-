#include "MessagingPage.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

MessagingPage::MessagingPage(QWidget *parent) :
    QWidget(parent)
{
    createLayout();
}

void MessagingPage::createLayout()
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    QHBoxLayout *buttonLayout = new QHBoxLayout();

    QPushButton *voiceButton = new QPushButton("Voice");
    QPushButton *videoButton = new QPushButton("Video");
    QPushButton *emojiButton = new QPushButton("Emoji");

    buttonLayout->addWidget(voiceButton);
    buttonLayout->addWidget(videoButton);
    buttonLayout->addWidget(emojiButton);

    layout->addLayout(buttonLayout);

    setLayout(layout);
}
