#include <iostream>
 
using namespace std;
 
template<typename T>
void calc(T n, char c, T m){
switch (c) 
       {
          case'+':cout<<n<<c<<m<<" = "<<(n+m)<<endl; break;
          case'-': cout<<n<<c<<m<<" = "<<(n-m)<<endl;break; 
          case'/': cout<<n<<c<<m<<" = "<<(n/m)<<endl; break; 
          case'*': cout<<n<<c<<m<<" = "<<(n*m)<<endl;break;
          default: cout<<"Такой операции нет"<< endl;
         }
}
int main(){ 
    char a; 
    int c,b;
    cout<<"Введите 1 число:" << endl;
       cin>>c;
    cout<<"Введите знак операции:" << endl;
       cin>>a;
    cout<<"Введите 2 число:" << endl;
       cin>>b;
    calc(c, a, b);
 
    return 0;
}
