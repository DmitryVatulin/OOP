#include <iostream>
#include <cmath>
#include <complex>

using namespace std;
int main()
{
cout << "Enter the first complex number"<<endl;
complex<double> a;
cin >> a;
cout << "Enter the second complex number "<< endl;
complex<double> b;
cin >> b;
cout << "What you need" << endl;
cout << "1 - Square"<< endl;
cout << "2 - Multiply the first number by a constant "<< endl;
cout << "3 - 1*2" << endl;
cout << "4 - Subtract the second from the first number" << endl;
cout << "5 - Add the first number to the second" << endl;
int x; 
cin >> x;
complex<double> c;
const double n = 2.5;
switch (x)
{
case 1:
c = a * a;
cout << c;
break;
case 2:
c = a * n;
cout << c;
break;
case 3:
c = b * a;
cout << c;
break;
{
}
case 4:
c = a - b;
cout << c;
break;
case 5:
c = a + b;
cout << c;
break;
}
return 0;
}
