#include <iostream>
#include <ctime>
using namespace std;

double *createArray(int);
void fillArray(double*,int);
void showArray(double*,int);
void clearArray(double*,int);

int main() {
srand(time(NULL));
double *Name;
int size = 0;
cout << "Enter array size (lower than 1 if you want to exit the program):" << endl;
cin >> size;
while(size>0){
Name = createArray(size);
fillArray(Name,size);
showArray(Name,size);
clearArray(Name,size);
cout << "Enter size of massive(lower than 1 if you want to exit the program): ";
cin >> size;
}
return 0;
}
double* createArray(int size){
double *GoodName = new double[size];
return GoodName;
}
void fillArray(double *Array,int size){
for(int a=0;a<size;a++){
Array[a]=rand() % 1000;
}
}
void showArray(double *Array,int size){
for(int a=0;a<size;a++){
cout << Array[a] << ' ';
}
}
void clearArray(double *Array,int size){
delete[]Array;
}
