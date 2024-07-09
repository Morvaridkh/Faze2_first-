#ifndef TIME1_H
#define TIME1_H

#include <QObject>
#include <QWidget>
#include <string>
using std::string;

class Time1:QWidget
{
    Q_OBJECT
public:
    Time1(string&,string&,string&,string&,string&,string&);
private:
    string year;
    string mounth;
    string day;
    string hour;
    string minute;
    string second;
};

#endif // TIME1_H
