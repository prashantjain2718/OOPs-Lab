// 2.3 WAP in c++ enter sutdent details with n subject marks using array within structure 
#include <iostream>
using namespace std;
struct student
{
    char name[20];
    int rollno;
    int m[5];
} s;
int main()
{
    int i, n;
    cout << "Enter the name of student: ";
    cin >> s.name;
    cout << "Enter the rollno of student: ";
    cin >> s.rollno;
    cout << "How many subject marks you want to enter: ";
    cin >> n;
    cout << "Enter the marks of " << n << " subjects: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.m[i];
    }

    cout << "You entered: " << endl;
    cout << "Name: " << s.name << endl;
    cout << "Rollno: " << s.rollno << endl;
    cout << "Marks: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Subject " << i + 1 << ": " << s.m[i] << endl;
    }
    return 0;
}

// Output:
// Enter the name of student: prashant
// Enter the rollno of student: 124
// How many subject marks you want to enter: 3
// Enter the marks of 3 subjects: 
// Subject 1: 99
// Subject 2: 98
// Subject 3: 97
// You entered: 
// Name: prashant
// Rollno: 124
// Marks: 
// Subject 1: 99
// Subject 2: 98
// Subject 3: 97