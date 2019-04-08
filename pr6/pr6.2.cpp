#include <iostream>
#include <cmath>
using namespace std;

class Function {	
public:
	virtual void printFunction() = 0;	

	virtual double count(double x) = 0;	

	virtual void takeDerivative() = 0;
};

class Const : public Function{
	double c;
public:
	Const(double c) { this->c = c; }

	void printFunction() { cout << "Function: f(x) = " << c << endl; }

	double count(double x) { return c; }

	void takeDerivative() { cout << "Derivative: 0" << endl; }
};

class Variable : public Function {	
public:
	void printFunction() { cout << "Function: f(x) = x" << endl; }

	double count(double x) { return x; }

	void takeDerivative() { cout << "Derivative: 1" << endl; }
};

class Sum : public Function {	
	double y;
public:
	Sum(double y) { this->y = y; }

	void printFunction() { cout << "Function: f(x) = x + y" << endl; }

	double count(double x) { return x + y; }

	void takeDerivative() { cout << "Derivative: 2" << endl; }
};

class Difference : public Function {	
	double y;
public:
	Difference(double y) { this->y = y; }

	void printFunction() { cout << "Function: f(x) = x - y" << endl; }

	double count(double x) { return x - y; }

	void takeDerivative() { cout << "Derivative: 0" << endl; }
};

class Product : public Function {	
	double y;
public:
	Product(double y) { this->y = y; }

	void printFunction() { cout << "Function: f(x) = x * y" << endl; }

	double count(double x) { return x * y; }

	void takeDerivative() { cout << "Derivative: y * dx" << endl; }
};

class Quotient : public Function {	
	double y;
public:
	Quotient(double y) { this->y = y; }

	void printFunction() { cout << "Function: f(x) = x / y" << endl; }

	double count(double x) { return x / y; }

	void takeDerivative() { cout << "Derivative: dx / y" << endl; }
};

class Sin : public Function {
public:
	void printFunction() { cout << "Function: f(x) = sin(x)" << endl; }

	double count(double x) { return sin(x); }

	void takeDerivative() { cout << "Derivative: cos(x)" << endl; }
};

class Cos : public Function {	
public:
	void printFunction() { cout << "Function: f(x) = cos(x)" << endl; }

	double count(double x) { return cos(x); }

	void takeDerivative() { cout << "Derivative: -sin(x)" << endl; }
};

class Exp : public Function {
public:
	void printFunction() { cout << "Function: f(x) = e^x" << endl; }

	double count(double x) { return exp(x); }

	void takeDerivative() { cout << "Derivative: e^x" << endl; }
};

class Ln : public Function {	
public:
	void printFunction() { cout << "Function: f(x) = ln(x)" << endl; }

	double count(double x) { return log(x); }

	void takeDerivative() { cout << "Derivative: 1/x" << endl; }
};

int main() {
	double y, x;
	cout << "Constant" << endl << "Enter value: ";
	cin >> y;
	Const c(y);

	cout << "Enter argument: ";
	cin >> x;

	c.printFunction();
	cout << "f(" << x << ") = " << c.count(x) << endl;
	c.takeDerivative();

	cout << endl << "Variable" << endl << "Enter argument: ";
	cin >> x;
	Variable v;
	v.printFunction();
	cout << "f(" << x << ") = " << v.count(x) << endl;
	v.takeDerivative();

	cout << endl << "Sum" << endl << "Enter x and y: ";
	cin >> x >> y;
	Sum s(y);
	s.printFunction();
	cout << "f(" << x << ") = " << s.count(x) << endl;
	s.takeDerivative();

	cout << endl << "Difference" << endl << "Enter x and y: ";
	cin >> x >> y;
	Difference d(y);
	d.printFunction();
	cout << "f(" << x << ") = " << d.count(x) << endl;
	d.takeDerivative();

	cout << endl << "Product" << endl << "Enter x and y: ";
	cin >> x >> y;
	Product p(y);
	p.printFunction();
	cout << "f(" << x << ") = " << p.count(x) << endl;
	p.takeDerivative();

	cout << endl << "Quotient" << endl << "Enter x and y: ";
	cin >> x >> y;
	Quotient q(y);
	q.printFunction();
	cout << "f(" << x << ") = " << q.count(x) << endl;
	q.takeDerivative();

	cout << endl << "Sin" << endl << "Enter argument: ";
	cin >> x;
	Sin si;
	si.printFunction();
	cout << "f(" << x << ") = " << si.count(x) << endl;
	si.takeDerivative();

	cout << endl << "Cos" << endl << "Enter argument: ";
	cin >> x;
	Cos co;
	co.printFunction();
	cout << "f(" << x << ") = " << co.count(x) << endl;
	co.takeDerivative();

	cout << endl << "Exp" << endl << "Enter argument: ";
	cin >> x;
	Exp e;
	e.printFunction();
	cout << "f(" << x << ") = " << e.count(x) << endl;
	e.takeDerivative();

	cout << endl << "Ln" << endl << "Enter argument: ";
	cin >> x;
	Ln l;
	l.printFunction();
	cout << "f(" << x << ") = " << l.count(x) << endl;
	l.takeDerivative();

	system("pause");
	return 0;
}
