#ifndef POST1_H
#define POST1_H

#include <QObject>
#include <QWidget>
#include <string>
#include <vector>
#include "like1.h"
#include "comment1.h"
#include "content1.h"

using std::string;
using std::vector;
class post1:public content1
{
  //  Q_OBJECT
public:
    post1();

private:
    string Post_ID;
    int Reposet_counter;
    vector<like1>Like;
    vector<comment1>Comment;
};

#endif // POST1_H
