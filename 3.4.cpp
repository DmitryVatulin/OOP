#include <iostream>
#include <string>
using namespace std;
class Vector
{
double module;
double coordinate;
double x;
double y;
double z;
public:
Vector(double module,double coordinate)
{
setModule (module);
setCoordinate (coordinate);
}
void setModule (double module)
{
this->module=module;
}
void setCoordinate ( double coordinate)
{
this->coordinate=coordinate;
}
double getModule ()
{
return module;
}
double getCoordinate ()
{
return coordinate;
}
};
int main (){
double module;
double coordinate;
cout « "Enter vector module" « endl;
cin » module;
cout « "Enter vector coordinates" « endl;
cin » coordinate;
Vector name(module,coordinate);
cout « "module " « name.getModule() « endl;
cout « "coordinate " « name.getCoordinate() « endl;
return 0;
}
