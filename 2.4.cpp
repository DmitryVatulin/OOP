#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, x, y, t;
	cout << "Enter a and x: ";
	cin >> a >> x;

	if (a<=x) {
		y = a+log(x+a);
	} else {
		y = sqrt(sin(a*x));
	}

	if (a>y) {
		t = y/(a-x);
	} else {
		if (a==y) {
			t =y/(a-x)+(a+x)/(y*y);
		} else {
			t =tan(a*x)+cos(2*a*y);
		}
	}
    if (isnan(y)|| isnan(t))
    cout << "error" << endl;
    else
	cout << " a = " << a << " x = " << x << " y = " << y << " t = " << t << endl;
	return 0;
}
