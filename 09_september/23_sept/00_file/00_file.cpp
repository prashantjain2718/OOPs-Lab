// NOT TO WRITE IN LAB RECORD

#include <iostream>
#include <fstream>
using namespace std;
// int main()
// {
//     ofstream fobj("demo.txt");
//     fobj<<"Hello! Good morning";
//     fobj.close();
//     return 0;
// }
// // Output: demo.txt created with Hello! Good morning
int main()
{
    ifstream fobj;
    fobj.open("demo.txt");
    char str[30];
    fobj.getline(str,30);
    cout << "String read from file" << endl;
    cout << str << endl;
    fobj.close();
    return 0;
}

// Output:
// String read from file
// Hello! Good morning