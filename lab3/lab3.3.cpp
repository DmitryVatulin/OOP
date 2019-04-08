#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class complex {
public:
double real;
double imag;
double mod;
void abs() {
mod=sqrt(pow(real, 2) + pow(imag, 2));
}
void vivod() {
cout « real « " " « imag « " " « mod « endl;
}
};
int main()
{
int k;
complex chislo;
double mod1,mod2;
cin » k;
switch (k) {
case 3:
cin » chislo.real » chislo.imag;
chislo.abs();
chislo.vivod();
break;
}
}
