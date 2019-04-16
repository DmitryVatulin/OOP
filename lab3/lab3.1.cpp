#include <iostream>
#include <string>
using namespace std;

class Child {
    private:
        string name;
        string family;
        int age;
    public:
        void set_name(string name) {
            this->name = name;
        };

        void set_family(string family) {
            this->family = family;
        };

        void set_age(int age) {
            this->age = age;
        };

        void print_value() {
            cout << "Имя: " << name << endl;
            cout << "Фамилия: " << family << endl;
            cout << "Возраст: " << age << endl;
        };
};

int main(int argc, char const *argv[])
{
    Child ch1,ch2;
    ch1.set_name((string)"Дмитрий");
    ch1.set_family((string)"Ватулин");
    ch1.set_age(18);
    ch2.set_name((string)"Василий");
    ch2.set_family((string)"Иванов");
    ch2.set_age(18);
    ch1.print_value();
    ch2.print_value();
    return 0;
}
