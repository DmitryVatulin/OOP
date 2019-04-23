#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
	string name;
	string surname;
	int age;
public:
	Student(string name, string surname, int age) : name(name), surname(surname), age(age) {
	};
	string getName() { 
	    return name;	}
	string getSurname() { 
	    return surname; }
	int getAge() { 
	    return age; 
	}
};
int main() {
    vector<Student> vec;
    string name;
    string surname;
    int age;
for (int i = 0; i < 2 ; i++) {
    cout << "Student " << endl;
    cout << "Enter name: ";
	cin >> name;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter age: ";
	cin >> age;
	vec.push_back(Student(name, surname, age));
	Student a(name, surname, age);
		cout << "Name: " << a.getName() << endl << "Surname: " << a.getSurname() << endl << "Age: " << a.getAge() << endl;
}
return 0;
}
