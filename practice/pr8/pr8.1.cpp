#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream creating_file;
    ifstream reading_file;
    reading_file.open("file.txt");
    if (reading_file.is_open()){
        string a;
        while(!reading_file.eof()){
            reading_file >> a;
            cout << a << ' ';
        }
        reading_file.close();
    }else{
        cout << "File not found.Please write the data to a file.";
        creating_file.open("file.txt",ios_base::trunc);
        creating_file.close();
    }
    return 0;
}
