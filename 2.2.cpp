#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 float a, b, z, t;
 cout << "Write a and b" << endl;
cin >> a >> b;
if(a<b){
    z=pow(abs(a*a-b*b),1/2.0);
}
else {
    z=1-2*cos(a)*sin(a);
}
if(z<b){
    t=pow(z+a*a*b,1/3.0);
}
else{
    if(z==b){
        t=1-log10(z)+cos(a*a*b);
    }else{
    t=1/cos(z*a);
}
}
cout << " a=" << a << " b=" << b << " z=" << z << " t=" << t << endl;
 return 0;
}
