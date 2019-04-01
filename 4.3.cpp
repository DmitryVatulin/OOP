#include <iostream>
#include <ctime>
using namespace std;
void showArray(int** ptrArr, int stringAmount, int columnAmount);
void fillArray(int** ptrArr, int strAmount, int colAmount);
int main()
{
    srand(time(NULL));
int stringAmount = 0;
int columnAmount = 0;
  cout << "Enter number of strings: ";
 cin >> stringAmount;
 cout << "Enter number of columns: ";
 cin >> columnAmount;
 int** ptrArr = new int*[stringAmount];
 for (int i = 0; i < stringAmount; i++)
 {
     ptrArr[i]=new int[columnAmount];
 }
 fillArray(ptrArr, stringAmount, columnAmount); 
 showArray(ptrArr, stringAmount, columnAmount);
 for(int i =0; i < stringAmount; i++)
 {
delete[] ptrArr[i];
}
delete[] ptrArr;
return 0;
 }
 void showArray(int** ptrArr, int stringAmount, int columnAmount)
 {
      cout << endl;
 for (int i = 0; i < stringAmount; i++)
 {
 cout << " ";
 for (int j = 0; j < columnAmount; j++)
 {
 cout << ptrArr[i][j] << "  ";
 }
 cout << " " << endl;
 }
}
void fillArray(int** ptrArr, int stringAmount, int columnAmount)
{
     for(int i = 0; i < stringAmount; i++)
 {
 for (int j = 0; j < columnAmount; j++)
 {
     ptrArr[i][j] = rand() % 41 + 10;
 }
 }
}
