#include <iostream>
#include<ctime>
#include<string>
using namespace std;
int compare(const void * x1, const void * x2)  
{
	return (*(int*)x1 - *(int*)x2);
}
int comp2(const void * a, const void * b)
{
	return (*(int*)b - *(int*)a);
}

void d1(int *a, int c) { for (int i = c - 1; i > -1; i--)cout << a[i]; cout << endl; }
void d2(int *a, int c) { qsort(a, c, sizeof(int), compare); };
void d3(int *a, int c) { qsort(a, c, sizeof(int), comp2); };

void (*func(int*a,int c))(int*a,int c){
	int sum=0;
	for (int i = 1; i < c; i++)sum += a[i];
	if (sum == a[0])return d1;
	else if (sum > a[0])return d2;
	else return d3;
	

}
int main()
{
	srand(time(0));
	int c;
	cin >> c;
	int *a= new int[c];
	a[0] = 1000;
	for (int i = 0; i < c; i++) {
		a[i] = rand() % 100+1;
		cout << a[i] << endl;
	}
	
	func(a, c)(a, c);
	for (int i = 0; i < c; i++) {
		
		cout << a[i] << " ";
	}
	cout << endl;
	delete[] a;
	system("pause");
    return 0;
}
