#include <iostream>
#include <cmath>
using namespace std;

class Vector {
    private:
        float x;
        float y;
    public:
        void set_value(float a, float b) {
            this->x = a;
            this->y = b;
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
