#include <iostream>
using namespace std;
int summ(int a, int b) {
	return a + b;
}

int multiplication(int a, int b) {
	return a * b;
}

int difference(int a, int b) {
	return a - b;
}
int(*d)(int a, int b);
int main()
{
	int a, b;
	cout << "enter a:" << endl;
	cin >> a;
	cout << "enter b:" << endl;
	cin >> b;
	int c;
	
	cout << "1-difference 2-summ 3-multiplication:" << endl;
	cin >> c;
	switch (c)
	{
	case 1: d = difference;
		break;
	case 2: d = summ;
		break;
	case 3: d = multiplication;
		break;
	default:
		break;
	}
	cout<<d(a, b)<<endl;
	system("pause");
    return 0;
}
