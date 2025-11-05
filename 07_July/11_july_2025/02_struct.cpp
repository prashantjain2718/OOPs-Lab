// 2.2 WAP in c++ enter n student records using array of structures
#include <iostream>
using namespace std;
struct student
{
    int rollno, fees;
    char name[20];
} s[10];
int main()
{
    int n;
    cout << "How many students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter rollno, fees, name of student " << i + 1 << endl;
        cin >> s[i].rollno >> s[i].fees >> s[i].name;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Data of student " << i + 1 << endl;
        cout << "rollno = " << s[i].rollno << endl;
        cout << "fees = " << s[i].fees << endl;
        cout << "name = " << s[i].name << endl;
    }
    return 0;
}

// Output:
// How many students:2
// Enter rollno, fees, name of student 1
// 124
// 10000
// ram
// Enter rollno, fees, name of student 2
// 115
// 10000
// shyam
// Data of student 1
// rollno = 124
// fees = 10000
// name = ram
// Data of student 2
// rollno = 115
// fees = 10000
// name = shyam