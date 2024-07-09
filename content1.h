#ifndef CONTENT1_H
#define CONTENT1_H
#include <QWidget>
#include <string>
#include <QMessageBox>
#include <QObject>

using std::string;

namespace Ui
{
    class content1;
}
class content1:public QWidget
{
    Q_OBJECT;
public:
    content1();
private:
    string sender_ID;
    string Content_Text;
};

#endif // CONTENT1_H
