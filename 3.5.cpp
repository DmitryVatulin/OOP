#include <iostream>
#include <string>
using namespace std;
class Library
{
int row;
int shelf;
public:
Library(int row,int shelf)
{
setRow (row);
setShelf (shelf);
}
void setRow (int row)
{
this->row=row;
}
void setShelf ( int shelf)
{
this->shelf=shelf;
}
int getRow ()
{
return row;
}
int getShelf ()
{
return shelf;
}
};
int main (){
int row;
int shelf;
cout « "Enter row in library" « endl;
cin » row;
cout « "Enter a shelf in the library" « endl;
cin » shelf;
Library name(row,shelf);
cout « "book on a row " « name.getRow() « endl;
cout « "book on the shelf " « name.getShelf() « endl;
return 0;
}
