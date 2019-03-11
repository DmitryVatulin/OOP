#include <iostream> 
#include <string> 
using namespace std; 

class Students { 
string *members; 
int n; 
public: 
void makestudents(); 
void getstudent(); 
}; 
void Students::makestudents() { 
cout << "enter the number of students" << endl; 
cin >> n; 
members = new string[n]; 
for (int i = 0; i < n; i++)
{cout<<"enter the last name / surnames of the student / students"<<endl;
cin >> members[i]; }
} 
void Students::getstudent() { 
for (int i = 0; i < n; i++)
cout << members[i] << endl;
} 

int main() 
{ 
Students a; 
a.makestudents(); 
a.getstudent(); 
system("pause"); 
return 0; 
}
