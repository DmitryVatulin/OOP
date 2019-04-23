#include <iostream>
using namespace std;

class complex {
public:
	double real;
	double imag;
	void operator +(complex);
	void operator -(complex);
	void operator =(complex);
	void operator<<(complex);
	void operator>>(complex);
	bool friend operator==(complex a, complex b) {
		if (a.real == b.real&&a.imag == b.imag)return true;
		else return false;
	}
	
	void output() {
		cout << real << " " << imag << endl;
	}
};
void complex::operator +(complex a) {
	real =real+a.real;
	imag =imag+a.imag;
}
void complex::operator-(complex a) {
	real = real - a.real;
	imag = imag - a.imag;
}
void complex::operator=(complex a) {
	real = a.real ;
	imag = a.imag ;
}
void complex::operator<<(complex a) {
	cout << a.real << " " << a.imag << endl;
}
void complex::operator>>(complex a) {
	cin >> a.real;
	cin>>a.imag;
	this->real = a.real;
	this->imag = a.imag;
}

int main()
{
	complex a = { 5,10 };
	complex number = { -5,10 };
	complex something;
	complex number2 = {0,0};
	int c;
	cin >> c;
	switch (c) {
	case 1:
		if (number == a) {
			cout << "a==number" << endl;
		}
		else cout << "a!=number" << endl;
		number2 >> number2;
		number2 << number2;
		number.output();
		something = number;
		something + a;
		something.output();
		number - a;
		number.output();
		break;
	}
}
