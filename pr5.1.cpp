#include <iostream>
using namespace std;

void bubble_sort(int * array, int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length;j++) {
            if (array[i] > array[j]) {
                swap(array[i],array[j]);
            }
        }
    }
}

void bubble_sort(float * array, int length) {
    for (int i = 0; i < length;i++) {
        for (int j = i + 1; j < length;j++) {
            if (array[i] > array[j]) {
                swap(array[i],array[j]);
            }
        }
    }
}

int main() {
    int array_int[10] = {10,5,4,2,1,9,8,7,6,3};
    float array_f[10] = {10,5,4,2,1,9,8,7,6,3};
    bubble_sort(array_int,10);
    bubble_sort(array_f,10);
    for (int i = 0; i < 10; i++) {
        cout << array_int[i] << '\t' << array_f[i] << endl;
    }
    return 0;
}
