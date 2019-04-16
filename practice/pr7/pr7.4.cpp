#include <iostream>
using namespace std;

class Screen {
protected:
double screenSize;
public:
Screen(double size) { this->screenSize = size; }

virtual void changeScreen(double size) = 0;

};
class Keyboard {
protected:
int buttons;
public:
Keyboard(int buttons) { this->buttons = buttons; }

virtual void changeKeyboard(int buttons) = 0;
};
class Computer : public Screen, Keyboard {
public:
Computer(double screenSize, int buttons) : Screen(screenSize), Keyboard(buttons) {};

void changeScreen(double size) {
cout << "screen" << screenSize <<
"has been changed" << size << "size" << endl;
screenSize = size;
}

void changeKeyboard(int buttons) {
cout << "keyboard with" << this->buttons << "buttons" <<
"has been changed" << buttons << "buttons" << endl;
this->buttons = buttons;
}
~Computer() {}
};

class Notebook : public Screen, Keyboard {
public:
Notebook(double screenSize, int buttons) : Screen(screenSize), Keyboard(buttons) {};

void changeScreen(double size) {
if (screenSize == size) {
cout << "Screen has been changed." << endl;
}
else {
cout << "Screen not changed." << endl;
}
}

void changeKeyboard(int buttons) {
if (this->buttons == buttons) {
cout << "The keyboard has been changed." << endl;
}
else {
cout << "The keyboard has not been changed." << endl;
}
}

~Notebook() {}
};

class Phone : public Screen, Keyboard {
public:
Phone(double screenSize, int buttons) : Screen(screenSize), Keyboard(buttons) {};

void changeScreen(double size) {
if (screenSize == size) {
cout << "phone screen changed" << endl;
}
else {
cout << "phone screen has not been changed" << endl;
}
}

void changeKeyboard(int buttons) {
cout << "Keyboard cannot be changed!" << endl;
}

~Phone() {}
};

int main() {

int z=1;
do {
cout << "What device will work: 1-phone, 2- notebook, 3- computer" << endl;
int x, y;
cin >> z;
switch (z)
{
case 1: {cout << "Enter the screen size and number of buttons: " << endl;

cin >> x >> y;
Phone a(x, y);
cout << "How much do you want to change the screen size and the number of buttons: " << endl;
cin >> x >> y;
a.changeKeyboard(x);
a.changeScreen(y);
break; }
case 2: {cout << "Enter the screen size and number of buttons: " << endl;

cin >> x >> y;
Notebook b(x, y);
cout << "How much do you want to change the screen size and the number of buttons: " << endl;
cin >> x >> y;
b.changeKeyboard(x);
b.changeScreen(y);
break; }
case 3: {cout << "Enter the screen size and number of buttons: " << endl;

cin >> x >> y;
Computer c(x, y);
cout << "How much do you want to change the screen size and the number of buttons: " << endl;
cin >> x >> y;
c.changeKeyboard(x);
c.changeScreen(y);
break; }
default:
break;
}

} while (z != 0);
system("pause");
return 0;
}
