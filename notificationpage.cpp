#include "NotificationPage.h"
#include <QLabel>
#include <QVBoxLayout>

NotificationPage::NotificationPage(QWidget *parent) :
    QWidget(parent)
{
    createLayout();
}

void NotificationPage::createLayout()
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *suggestionLabel = new QLabel("Suggestion: Improve UI design.");
    suggestionLabel->setToolTip("Reason: Enhance user experience.");
    layout->addWidget(suggestionLabel);

    setLayout(layout);
}
