#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Complex 
{
	double Re, Im;
public:
	void set_c()
	{
		cout << "Enter valid part: " << endl;
		cin >> Re;
		cout << "Enter the imaginary part: " << endl;
		cin >> Im; 
	}
	string get_c() 
	{
		return to_string(Re) + "+" + to_string(Im) + "i";
	}
	double modul() 
	{
		return sqrt(Re*Re + Im*Im);
	}
	double arg()
	{
		return atan(Im / Re);
	}
};

int main()
{
	Complex a;
	a.set_c();
	cout << a.get_c() << endl;;
	cout << a.modul()<<endl;
	cout<<a.arg()<<endl;
	system("pause");
    return 0;
}
