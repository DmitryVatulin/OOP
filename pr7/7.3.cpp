#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Transport {
protected:int weight;
	int speed;
	string name;
public:Transport() {
	cout << "enter the mass and speed of the transport:" << endl;
	cin >> weight >> speed;
	cout << "enter the name of the transport" << endl;
	cin >> name;
}
	   virtual  void showAdvantages() = 0;
};
class Bycicle:public Transport {
public:
	Bycicle() :Transport() {  }
	void showAdvantages() {
		cout << "Bycicle:" << name << ' ' << speed << "km/h " << weight << "kg"<<endl;
	}

};
class Bus :public Transport {
public:
	Bus() :Transport() {}
	void showAdvantages() {
		cout << "Bus:" << name << ' ' << speed << "km/h " << weight << "kg" << endl;
	}

};

class Car :public Transport {
public:
	Car() :Transport() { }
	void showAdvantages() {
		cout << "Car:" << name << ' ' << speed << "km/h " << weight << "kg" << endl;
	}

};
int main()
{
	string b;
	cout << "Enter the transport (Bicycle, Bus, Car): " << endl;
	cin >> b;
	if(b=="Bus"){ Bus a; a.showAdvantages();
	}
	else if (b == "Car") {
		Car a; a.showAdvantages();
	}
	else if (b == "Bicycle") {
		Bycicle a; a.showAdvantages();
	}
	system("pause");
    return 0;
}
