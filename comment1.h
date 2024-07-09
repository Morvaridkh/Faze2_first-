#ifndef COMMENT1_H
#define COMMENT1_H

#include <QObject>
#include <QWidget>
#include <string>
#include "content1.h"
using std::string;

class comment1:public content1
{
    Q_OBJECT
public:
    comment1(string&,string&);
    void setPostID(string&);
    void setCommentID(string&);
    string getPostID() const;
    string getCommentID() const;
private:
    string Post_ID;
    string Comment_ID;
};

#endif // COMMENT1_H
