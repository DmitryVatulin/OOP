#include <iostream>
#include <string>
using namespace std;
class book
{
public:
	string autor;
	string title;
	double page;
	void open();
};
int main()
{
	book Book;
	Book.open();
	system("pause");
	return 0;
}
void book::open()
{
    	double random;
	cout << "enter author" << endl;
	cin >> autor;
	cout << "Enter the title" << endl;
	cin >> title;
	random = 1 + rand() % 50;
	cout << " " << autor << " " << "" << title << " " << " open on" <<" "<< random <<" "<< "page" << endl;
}
