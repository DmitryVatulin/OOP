#include <iostream>
#include <string>
using namespace std;

class Tiles {
    public:
        string brand;
        int size_h;
        int size_w;
        int price;
        Tiles(string b, int h, int w, int p) {
            brand = b;
            size_h = h;
            size_w = w;
            price = p;
        };
        void getData() {
           cout << "Brand: " << '\t' << brand << endl;
            cout << "Length: " << '\t' << size_h << endl;
            cout << "Width " << '\t' << size_w << endl;
            cout << "Price: " << '\t' << price << endl;
        };
};

int main() {
    Tiles t1((string)"Дуб", 12,10,200),t2((string)"Береза",40,25,350);
    t1.getData();
    t2.getData();
    return 0;
}
