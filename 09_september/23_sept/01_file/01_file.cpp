// Main objective: write program to understand file handling techniques
// 12.1 wap in c++ writing student data in a file and reading using file handling function

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream rw;
    rw.open("student.txt", ios::out);
    char name[20];
    int age;
    float fees;
    cout << "Enter the name: ";
    cin.getline(name, 20);
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter fees: ";
    cin >> fees;
    rw << name << endl
       << age << endl
       << fees << endl;
    rw.close();
    rw.open("student.txt", ios::in);
    rw.getline(name, 20);
    rw >> age;
    rw >> fees;
    cout << "Student details read from file\n";
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl;
    cout << "Fees = " << fees << endl;
    rw.close();
    return 0;
}

// Output:
// Enter the name: Prashant
// Enter the age: 20
// Enter fees: 200000
// Student details read from file
// Name = Prashant
// Age = 20
// Fees = 200000