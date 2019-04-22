#pragma once
#include<iostream>
class Complex
{
private:
	double real;
	double image;
public:
	Complex();
	Complex(double, double);
	void setComplex(double real,double image);
	void getComplex();
	double getModule();
	Complex& operator=(const Complex&);
	friend const Complex operator+(const Complex&,const Complex&);
	friend const Complex operator-(const Complex&, const Complex&);
	friend const Complex operator*(const Complex&, const Complex&);
	friend const Complex operator/(const Complex&, const Complex&);
	~Complex();
};
