// Objective: C++ program using with the concept of structures
// 2.1 WAP in c++ insert student details using structures
#include <iostream>
using namespace std;
struct student {
    int rollno;
    char name[20];
    float fees;
}s;
int main()
{
    cout << "Enter rollno, name, fees\n";
    cin >> s.rollno >> s.name >> s.fees;
    cout << "rollno = " << s.rollno << endl;
    cout << "name = " << s.name << endl;
    cout << "fees = " << s.fees << endl;
    return 0;
}

// Output:
// Enter rollno, name, fees
// 124 prashant 100000
// rollno = 124
// name = prashant
// fees = 100000