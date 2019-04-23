#include <iostream>
#include <cmath>
using namespace std;

class Vector {
    private:
        float x;
        float y;
    public:
        Vector(float a, float b) {
            x = a;
            y = b;
        }

        Vector& operator= (Vector& value) {
            this->x = value.x;
            this->y = value.y;
            return *this;
        };

        friend bool operator== (const Vector& left, const Vector& right) {
            bool isX = left.x == right.x;
            bool isY = left.y == right.y;
            return isX && isY;
        };

        friend ostream& operator<< (ostream& out, const Vector& value) {
            out << "( " << value.x << " , " << value.y << " )" << endl;
            return out;
        };

        friend istream& operator>> (istream& is, const Vector& value) {
            is >> value.x >> value.y;
            return is;
        }

        float get_abs() {
            return sqrt(x*x + y*y);
        };

        void plus(Vector b) {
            x += b.x;
            y += b.y;
        };
        
        void minus(Vector b) {
            x -= b.x;
            y -= b.y;
        };
};
