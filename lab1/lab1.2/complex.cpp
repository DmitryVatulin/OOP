#include "Complex.h"



Complex::Complex()
{
	this->real = 0;
	this->image = 0;
}
Complex::Complex(double real, double image)
{
	this->real = real;
	this->image = image;
}
void Complex::setComplex(double real,double image) {
	this->real = real;
	this->image = image;
}
void Complex::getComplex() {
	std::cout << real << " + (" << image << "i)\n";
}
double Complex::getModule() {
	return(sqrt(real*real + image * image));
}
Complex& Complex::operator=(const Complex& x) {
	re = x.real;
	im = x.image;
	return *this;
}
const Complex operator+(const Complex& x1, const Complex& x2) {
	return Complex(x1.real + x2.real, x1.image + x2.image);
}
const Complex operator-(const Complex& x1, const Complex& x2) {
	return Complex(x1.real - x2.real, x1.image - x2.image);
}
const Complex operator*(const Complex& x1, const Complex& x2) {
	return Complex(x1.real*x2.real - x1.image*x2.image, x1.real*x2.image + x2.real*x1.image);
}
const Complex operator/(const Complex& x1, const Complex& x2) {
	return Complex((x1.real*x2.real + x1.image*x2.image) / (x2.real*x2.real + x2.image*x2.image), (x1.real*x2.image - x1.image*x2.real) / (x2.real*x2.real + x2.image*x2.image));
}

Complex::~Complex()
{
}
