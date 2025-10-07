//3.4 wap in c++ enter n student records using array of object and print the value
#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    float fees;

public:
    void input()
    {
        cout << "Enter rollno\n";
        cin >> rollno;
        cout << "Enter name\n";
        cin >> name;
        cout << "Enter fees\n";
        cin >> fees;
    }
    void show()
    {
        cout << "rollno = " << rollno << endl;
        cout << "name = " << name << endl;
        cout << "fees = " << fees << endl;
    }
};
int main()
{
    class student st[10];
    int i, n;
    cout << "How many student record you want to enter\n";
    cin >> n;
    cout << "Enter student data\n";
    for (i = 0; i < n; i++)
    {
        st[i].input();
    }
    cout << "Student data\n";
    for (i = 0; i < n; i++)
    {
        st[i].show();
    }
    return 0;
}

// Output
// How many student record you want to enter
// 3
// Enter student data
// Enter rollno
// 124
// Enter name
// prashant
// Enter fees
// 100000
// Enter rollno
// 115
// Enter name
// palak
// Enter fees
// 100000
// Enter rollno
// 107
// Enter name
// naman
// Enter fees
// 100000
// Student data
// rollno = 124
// name = prashant
// fees = 100000
// rollno = 115
// name = palak
// fees = 100000
// rollno = 107
// name = naman
// fees = 100000