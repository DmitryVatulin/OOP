#pragma once
#include<iostream>
class Complex
{
private:
	double real;
	double imag;
public:
	Complex();
	Complex(double, double);
	void setComplex(double real,double imag);
	void getComplex();
	double getModule();
	Complex& operator=(const Complex&);
	friend const Complex operator+(const Complex&,const Complex&);
	friend const Complex operator-(const Complex&, const Complex&);
	friend const Complex operator*(const Complex&, const Complex&);
	friend const Complex operator/(const Complex&, const Complex&);
	~Complex();
};
