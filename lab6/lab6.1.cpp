#include <iostream>
#include <string>

using namespace std;

class Student {	
	string name;
	string surname;
	int age;
	string group;
public:
	Student(string name, string surname, int age ,string group) : name(name), surname(surname), age(age), group(group) {};

	string getName() {
	    return name;	}
	string getSurname() {
	    return surname; }
	int getAge() {
	    return age; }
	    string getGroup() {
	    return group; }
};

class Headman : public Student {	
	string phone;
	string mail;
public:
	Headman(string name, string surname, int age, string group, string phone, string mail) :
		Student(name, surname, age, group), phone(phone), mail(mail) {};

	string getMail() {
	    return mail; }
	string getPhone() { 
	    return phone; }

};

int main() {

	string name, surname, group, phone, mail;
	int age;

	cout << "Enter name: ";
	cin >> name;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter group";
	cin >> group;
	cout << "Enter phone: ";
	cin >> phone;
	cout << "Enter mail: ";
	cin >> mail;

	Headman h(name, surname, age, group, phone, mail);

	cout << "Name: " << h.getName() << endl;
	cout << "Surname: " << h.getSurname() << endl;
	cout << "Age: " << h.getAge() << endl;
	cout << "Group: " << h.getGroup() << endl;
	cout << "Phone: " << h.getPhone() << endl;
	cout << "Mail: " << h.getMail() << endl;
	cout << endl;

	system("pause");
	return 0;
}
