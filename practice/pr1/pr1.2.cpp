#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    float a,b;
    cout << "Write a and b " << endl;
    cin >> a >> b;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "+" << b << "=" << a + b << endl;
    return 0;
}
