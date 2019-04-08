#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

double calc(int a, int b);
double calc(double a, double b);

int main() {
	int z;
	cout << "Enter the type of numbers(1-Whole,2-fractional): " << endl;
	cin >> z;
	if (z == 1) {
		int a , b  ;
		cout << "Enter two numbers (preferably whole): " << endl;
		cin >> a >> b;
		cout << "Answer: " << endl;
		cout << calc(a, b) << endl;
	}
	else {
		double a, b;
		cout << "Enter two numbers (preferably fractional): " << endl;
		cin >> a >> b;
		cout << "Answer: " << endl;
		cout << calc(a, b) << endl;
	}
	system("pause");
	return 0;
}

double calc(int a, int b)
{
	int k;
	do {
	    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
	    cout << "Select operation..." << endl;
		cout << "{} = I1+2-3*4/" << endl;
		cin >> k;
		switch (k)
		{
		case 1:
			return a + b;
			break;
		case 2:
			return a - b;
			break;
		case 3:
			return a*b;
			break;
		case 4: 
			return a / b;
		default:
			break;
		}

	} while (k != 0);
}
double calc(double a, double b)
{
	int k;
	do {
	    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
	    cout << "Select operation..." << endl;
		cout << "{} = D1+2-3*d/" << endl;
		cin >> k;
		switch (k)
		{
		case 1:
			return a + b;
			break;
		case 2:
			return a - b;
			break;
		case 3:
			return a*b;
			break;
		case 4:
			return a / b;
		default:
			break;
		}
	} while (k != 0);
}
