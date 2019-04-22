#include "Complex.h"



Complex::Complex()
{
	this->real = 0;
	this->imag = 0;
}
Complex::Complex(double real, double imag)
{
	this->real = real;
	this->imag = imag;
}
void Complex::setComplex(double real,double imag) {
	this->real = real;
	this->image = imag;
}
void Complex::getComplex() {
	std::cout << real << " + (" << imag << "i)\n";
}
double Complex::getModule() {
	return(sqrt(real*real + imag * imag));
}
Complex& Complex::operator=(const Complex& x) {
	re = x.real;
	im = x.imag;
	return *this;
}
const Complex operator+(const Complex& x1, const Complex& x2) {
	return Complex(x1.real + x2.real, x1.imag + x2.imag);
}
const Complex operator-(const Complex& x1, const Complex& x2) {
	return Complex(x1.real - x2.real, x1.imag - x2.imag);
}
const Complex operator*(const Complex& x1, const Complex& x2) {
	return Complex(x1.real*x2.real - x1.imag*x2.imag, x1.real*x2.imag + x2.real*x1.imag);
}
const Complex operator/(const Complex& x1, const Complex& x2) {
	return Complex((x1.real*x2.real + x1.imag*x2.imag) / (x2.real*x2.real + x2.imag*x2.imag), (x1.real*x2.imag - x1.imag*x2.real) / (x2.real*x2.real + x2.imag*x2.imag));
}

Complex::~Complex()
{
}
