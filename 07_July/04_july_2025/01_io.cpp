//Objective: understand the basics of C++ library, variables, data input-output
// 1.1 WAP in c++ enter your detail and print output

#include <iostream>
using namespace std;
int main()
{
    int rollno;
    char name[20];
    char cname[20];
    float fees;
    cout << "Enter your rollno: " << endl;
    cin >> rollno;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your college name: " << endl;
    cin >> cname;
    cout << "Enter your fees: " << endl;
    cin >> fees;
    cout << "You Entered: " << endl;
    cout << "rollno = " << rollno << endl;
    cout << "name = " << name << endl;
    cout << "college name = " << cname << endl;
    cout << "fees = " << fees << endl;
    return 0;
}

// Output:
// Enter your rollno:
// 124
// Enter your name: 
// prashant
// Enter your college name: 
// aceit
// Enter your fees: 
// 52857
// You Entered: 
// rollno = 124
// name = prashant
// college name = aceit
// fees = 52857