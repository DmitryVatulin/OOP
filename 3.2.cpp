#include <iostream>
#include <string>
using namespace std;
class Group
{
string code;
int course; 
public:
Group(string code,int course)
{
setCode (code);
setCourse (course);
}
void setCode (string code)
{
this->code=code;
}
void setCourse ( int course)
{
this->course=course;
}
string getCode ()
{
return code;
}
int getCourse ()
{
return course;
}
};
int main (){
string code;
int course;
cout « "Enter code" « endl;
cin » code;
cout « "Enter course" « endl;
cin » course;
Group students(code,course);
cout « "code " « students.getCode() « endl;
cout « "course " « students.getCourse() « endl; 
return 0;
}
