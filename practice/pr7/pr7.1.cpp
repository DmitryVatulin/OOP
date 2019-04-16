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
	Animal(int size, int weight,string name) {
			this->name = name;
			this->size = size;
			this->weight = weight;
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

class Bird : public Animal {
    public:
        Bird( int size, int weight, string name) :Animal(size, weight, name) {
        };
        void make_sound() {
            cout << "Tweet" << endl;
        }
};

int main (){
    Cat a(2,2,"cat");
	a.make_sound();

	Dog b(4,4,"dog");
	b.make_sound();

	Bird c(1,1,"bird");
	c.make_sound();
    return 0;
}
