#include <iostream>
#include <string>
using namespace std;

class Human {
    protected:
        string name; 
        string surname; 
        string midname; 
        int age;
    public:
        Human() {
            name = " ";
            surname = " ";
            midname = " ";
            age = 0;
        };

        Human(string surname, string name, string midname, int age) : name(name), surname(surname), midname(midname), age(age) {
        };

        virtual void print() = 0;

        virtual ~Human() {
};
};
class Student : public Human {
    private:
        bool on_lesson;
    public:
        Student() : Human() {
            on_lesson = true;
        };

        Student(string name, string surname, string midname, int age, bool on_lesson) : Human(name,surname,midname,age), on_lesson(on_lesson)  {
        };

        void print() {
cout << "Student" << endl;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter midname: ";
	cin >> midname;
	cout << "Enter age: ";
	cin  >> age;
    cout << ((on_lesson) ? "Yes" : "No") << endl;
	cin >> on_lesson;
        };

        ~Student() {};
};


class Boss: public Human {
    private:
        int number_of_workers;
    protected:
        Boss() : Human() {
            number_of_workers = 0;
        }

        Boss(string name, string surname, string midname, int age, int workers) : Human(name,surname,midname,age),  number_of_workers( number_of_workers) {
        };

        void print() {
   cout << endl << "Boss" << endl;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter midname: ";
	cin >> midname;
	cout << "Enter age: ";
	cin  >> age;
	cout << "Enter number of workers: ";
	cin >> number_of_workers;
        };

        ~Boss() { };
};
