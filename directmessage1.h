#ifndef DIRECTMESSAGE1_H
#define DIRECTMESSAGE1_H

#include <QObject>
#include <QWidget>
#include <string>
#include "content1.h"
using std::string;
class DirectMessage1:public content1
{
    Q_OBJECT
public:
    DirectMessage1(string&,string&);
private:
    string Message_ID;
    string To_Who;
};

#endif // DIRECTMESSAGE1_H
