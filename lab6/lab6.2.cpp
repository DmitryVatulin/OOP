#include <iostream>
#include <string>
using namespace std;
class Alive {
    protected:
    string habitat;
    int age;
    string name;
    public:
    Alive(string name, int age, string habitat) : name(name), age(age), habitat(habitat) {};
    string getName() {
        return name;
    }
        int getAge() {
            return age;
        }
        string getHabitat() {
            return habitat;
        }
            virtual void move() = 0;
        };
class Fish : public Alive  {
    public :
    Fish(int age, string name, string habitat) : Alive(name, age, habitat) {};
    void move() 
    {
        cout << "fish " << "swim" << endl;
    }
};
class Animal : public Alive {
    public :
    Animal(int age, string name, string habitat) : Alive(name, age, habitat) {};
    void move()
    {
        cout << "animal " << "run" << endl;
    }
};
class Bird : public Alive {
    public :
    Bird(int age, string name, string habitat) : Alive(name, age, habitat) {};
    void move()
    {
        cout << "bird " << "fly" << endl;
    }
};
int main() {
    int age;
    string name;
    string habitat;
    cout << "Animal" << endl;
    cout << "enter name: ";
    cin >> name;
    cout << "enter age: " ;
    cin >> age;
    cout << "enter habitat: ";
    cin >> habitat;
    Animal a(age, name, habitat);
    cout << "Bird" << endl;
    cout << "enter name: ";
    cin >> name;
    cout << "enter age: " ;
    cin >> age;
    cout << "enter habitat: ";
    cin >> habitat;
    Bird b(age, name, habitat);
    cout << "Fish" << endl;
     cout << "enter name: ";
    cin >> name;
    cout << "enter age: " ;
    cin >> age;
    cout << "enter habitat: ";
    cin >> habitat;
    Fish c(age, name, habitat);
    cout << "Animal" << endl << "name: " << a.getName() << endl << "age: " << a.getAge() << endl << "habitat: " << a.getHabitat() <<endl;
    a.move();
    cout << "Bird" << endl << "name: " << b.getName() << endl << "age: " << b.getAge() << endl << "habitat: " << a.getHabitat() <<endl;
    b.move();
    cout << "Fish" << endl << "name: " << c.getName() << endl << "age: " << c.getAge() << endl << "habitat: " << a.getHabitat() <<endl;
    c.move();
    return 0;
};
