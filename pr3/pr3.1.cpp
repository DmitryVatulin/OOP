#include <iostream>
#include <string>
using namespace std;

class Book
{
string author;
string name;
int page;
public:
Book (string author, string name, int page)
{
setAuthor (author);
setName (name);
setPage (page); 
} 
void setAuthor (string author)
{
this->author=author;
}
void setName (string name)
{
this->name=name;
}
void setPage (int page)
{
this->page=page;
}
string getAuthor ()
{
return author;
}
string getName ()
{
return name;
}
int getPage ()
{
return page; 
}
};
int main (){
string author,name;
int page;
cout « "Enter author " « endl;
cin » author;
cout « "Enter name " « endl;
cin » name;
cout « "Enter page " «endl;
cin » page;
Book book (author,name,page);
cout « "author: " « book.getAuthor() « endl;
cout « "name: " « book.getName() « endl;
cout « "page: " « book.getPage() « endl;
return 0;
}
