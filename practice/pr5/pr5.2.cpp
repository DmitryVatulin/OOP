#include <iostream>
using namespace std;

void selection_sort(int * arr, int len) {
    int start_index = 0;
    while (start_index != len) {
        int min_index = start_index;
        for (int i = start_index; i < len; i++) {
            if (arr[min_index] > arr[i]) {
                min_index = i;
            }
        }
        swap(arr[start_index],arr[min_index]);
        start_index++;
    }
}

void selection_sort(float * arr, int len) {
    int start_index = 0;
    while (start_index != len) {
        int min_index = start_index;
        for (int i = start_index; i < len; i++) {
            if (arr[min_index] > arr[i]) {
                min_index = i;
            }
        }
        swap(arr[start_index],arr[min_index]);
        start_index++;
    }
}

int main() {
    int array_int[10] = {10,5,4,2,1,9,8,7,6,3};
    float array_f[10] = {10,5,4,2,1,9,8,7,6,3};
    selection_sort(array_int,10);
    selection_sort(array_f,10);
    for (int i = 0; i < 10; i++) {
        cout << array_int[i] << '\t' << array_f[i] << endl;
    }
    return 0;
}
