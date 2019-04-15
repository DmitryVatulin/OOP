#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file;
    string a;
    cout << "Enter text from the keyboard: "<< endl;
    getline(cin,a);
    file.open("file.txt", ios_base::trunc);
    file << a;
    file.close();
    return 0;
}
