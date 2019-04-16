#include <iostream>
#include <ctime>
using namespace std;
void fillArr(int* Arr, int sizeOfArr);
void showArr(int* Arr, int sizeOfArr);
void changeElements(int* Arr, int sizeOfArr);
int main (){
    srand(time(NULL));
    int sizeOfArr = 12;
    int *ptrArr=new int[sizeOfArr];
fillArr(ptrArr, sizeOfArr);
showArr(ptrArr, sizeOfArr);
changeElements(ptrArr, sizeOfArr);
showArr(ptrArr, sizeOfArr);
delete [] ptrArr;
return 0;
}
void fillArr(int* ptrArr, int sizeOfArr)
{
 for (int i = 0; i < sizeOfArr; i++){
 ptrArr[i] = i * 10; 
 }
}
void showArr(int* ptrArr, int sizeOfArr)
{
 for (int i = 0; i < sizeOfArr; i++)
 {
 cout << ptrArr[i] << "  ";
 }
 cout << endl;
}
void changeElements(int* ptrArr, int sizeOfArr)
{
 for (int i = 0; i < sizeOfArr; i = i + 2) {
		int a = ptrArr[i];
		ptrArr[i] = ptrArr[i+1];
ptrArr[i+1] = a;
}
}
