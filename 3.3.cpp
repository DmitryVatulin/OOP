#include <iostream>
#include <string>
using namespace std;
class Car
{
string brand;
string color;
public:
Car(string brand,string color)
{
setBrand (brand);
setColor (color);
}
void setBrand (string brand)
{
this->brand=brand;
}
void setColor ( string color)
{
this->color=color;
}
string getBrand ()
{
return brand;
}
string getColor ()
{
return color;
}
};
int main (){
string brand;
string color;
cout « "Enter car brand" « endl;
cin » brand;
cout « "Enter car color" « endl;
cin » color;
Car name(brand,color);
cout « "brand " « name.getBrand() « endl;
cout « "color " « name.getColor() « endl;
return 0;
}
