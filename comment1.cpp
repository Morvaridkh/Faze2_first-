#include "comment1.h"

comment1::comment1(string &p,string &c):Post_ID(p),Comment_ID(c){}

void comment1::setPostID(string &p)
{
    Post_ID = p;
}
void comment1::setCommentID(string &c)
{
    Comment_ID = c;
}
string comment1::getPostID() const
{
    return Post_ID;
}
string comment1::getCommentID() const
{
    return Comment_ID;
}
