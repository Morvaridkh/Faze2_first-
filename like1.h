#ifndef LIKE1_H
#define LIKE1_H

#include <QObject>
#include <QWidget>
#include <string>
#include "time1.h"

using std::string;

class like1:QWidget
{
    Q_OBJECT
public:
    like1(string&,string&);

private:
    string Who_liked_ID;
    string Like_ID;
};

#endif // LIKE1_H
