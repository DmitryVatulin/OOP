#include <iostream>
#include <string>
using namespace std;

class Animal {
    protected:
       int size;
	string name;
	int weight;
	virtual void make_sound() = 0;
	public:
	Animal(int size, int weight, string name): size(size), weight(weight), name(name) {
};
    int getSize() {
        return size;
    }
    int getWeight() {
        return weight;
    }
    string getName() {
        return name;
    }
};
class Cat : public Animal {
    public:
        Cat( int size, int weight, string name) : Animal(size, weight, name) {
        };
        void make_sound() {
            cout << "Meow" << endl;
        }
};

class Dog : public Animal {
    public:
        Dog( int size, int weight, string name) : Animal(size, weight, name) {
        };
        void make_sound() {
            cout << "Woof" << endl;
        }
};
int main (){
    int size;
    int weight;
    string name;
    cout << "Cat" << endl;
    cout << "Enter name: ";
	cin >> name;
	cout << "Enter size: ";
	cin >> size;
	cout << "Enter weight: ";
	cin >> weight;
	Cat a(size, weight, name);
	cout << "Dog" << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter size: ";
	cin >> size;
	cout << "Enter weight: ";
	cin >> weight;
	Dog b(size, weight, name);
    cout << "Cat" << endl << "name: " << a.getName() << endl << "size: " << a.getSize() << endl << "weight: " << a.getWeight() <<endl;
    a.make_sound();
    cout << "Dog" << endl << "name: " << b.getName() << endl << "size: " << b.getSize() << endl << "weight: " << b.getWeight() <<endl;
    b.make_sound();
    return 0;
}
