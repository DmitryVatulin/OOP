#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a , b , n , m;
    cout << "Write a and b" << endl;
 cin >> a >> b;
 if(a>=b){
     n=pow(a-b,1/3.0);
 }
 else {
     n=a*a+(a-b)/sin(a*b);
 }
 if(n<b){
     m=((n+a)/-b)+pow(sin(a)*sin(a)-cos(n),1/2.0);
 }
 else {
     if(n==b){
         m=b*b + tan(n*a);
     }else{
         m=b*b*b +n*a*a;
     }
 }
 cout << " a=" << a << " b=" << b << " n=" << n << " m=" << m << endl;
 return 0;
}
