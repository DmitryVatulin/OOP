#include <iostream>
using namespace std;

void insertion_sort(int * arr, int len) {
    int temp, item;
    for (int counter = 1; counter < len; counter++)
    {
        temp = arr[counter]; 
        item = counter-1; 
        while(item >= 0 && arr[item] > temp) 
        {
            arr[item + 1] = arr[item];
            arr[item] = temp;
            item--;
        }
    }
}

void insertion_sort(float * arr, int len) {
    int temp, item;
    for (int counter = 1; counter < len; counter++)
    {
        temp = arr[counter]; 
        item = counter-1; 
        while(item >= 0 && arr[item] > temp) 
        {
            arr[item + 1] = arr[item];
            arr[item] = temp;
            item--;
        }
    }
}

int main() {
    int array_int[10] = {10,5,4,2,1,9,8,7,6,3};
    float array_f[10] = {10,5,4,2,1,9,8,7,6,3};
    insertion_sort(array_int,10);
    insertion_sort(array_f,10);
    for (int i = 0; i < 10; i++) {
        cout << array_int[i] << '\t' << array_f[i] << endl;
    }
    return 0;
}
