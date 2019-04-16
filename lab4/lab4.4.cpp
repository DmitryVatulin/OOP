#include <iostream>
#include <string>
using namespace std;

class Child {
    private:
        string name;
        string family;
        int age;
    public:
        int some;
        Child(string name, string family, int age) {
            this->age = age;
            this->name = name;
            this->family = family;
        };

        void print_value() {
            cout << "Name: " << name << endl;
            cout << "Surname: " << family << endl;
            cout << "Age: " << age << endl;
        };
};

int main(int argc, char const *argv[])
{
    Child ch1((string)"Дмитрий", (string)"Ватулин", 18),ch2((string)"Василий", (string)"Иванов", 18);
    ch1.print_value();
    ch2.print_value();
    return 0;
}
