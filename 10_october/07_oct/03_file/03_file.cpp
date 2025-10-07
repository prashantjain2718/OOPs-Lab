// 12.3 wap in c++ demonstrating working with two files using file handling operations
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream f1, f2;
    f1.open("name.txt", ios::out);
    f1 << "Manish" << endl;
    f1 << "Ravi" << endl;
    f1 << "Mahesh" << endl;
    f1.close();
    f2.open("sname.txt", ios::out);
    f2 << "Dwivedi" << endl;
    f2 << "Sharma" << endl;
    f2 << "Jain" << endl;
    f2.close();
    f1.open("name.txt", ios::in);
    f2.open("sname.txt", ios::in);
    char str[15];
    while (f1.eof() == 0)
    {
        f1.getline(str, 15);
        cout << str << " ";
        f2.getline(str, 15);
        cout << str << endl;
    }
    f1.close();
    f2.close();
    return 0;
}

// Output:
// Manish Dwivedi
// Ravi Sharma
// Mahesh Jain
 