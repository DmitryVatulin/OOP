#include <iostream>
#include <cmath>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(float a, float b) {
            real = a;
            imag = b;
        };

        float get_abs() {
            return sqrt(pow(real,2)+pow(imag,2));
        };
        
        float getData() {
            cout << "Complex number: "<< endl;
            cout << "Real part: " << real << endl;
            cout << "Imaginary part: " << imag << endl;
            cout << "The absolute value of a number: " << this->get_abs() << endl << endl;
        };
};

int main() {
    Complex c1(5,2.2),c2(2,4.5);
    c1.getData();
    c2.getData();
    return 0;
}
