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
}
