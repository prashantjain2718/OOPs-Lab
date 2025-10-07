//3.5 wap in c++ enter student data with 5 subject marks using array within class
#include <iostream>
using namespace std;
class student
{
private:
    int rollno;
    char name[10];
    float marks[5];

public:
    void input()
    {
        int i;
        cout << "Enter roll no : ";
        cin >> rollno;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter 5 subject marks\n";
        for (i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject " << i + 1 << " : ";
            cin >> marks[i];
        }
    }
    void show()
    {
        int i;
        cout << "rollno = " << rollno << endl;
        cout << "name = " << name << endl;
        cout << "5 subject marks\n";
        for (i = 0; i < 5; i++)
        {
            cout << marks[i] << endl;
        }
    }
};
int main()
{
    class student st;
    st.input();
    st.show();
    return 0;
}

// Output:
// Enter roll no : 124
// Enter name : prashant
// Enter 5 subject marks
// Enter marks of subject 1 : 99
// Enter marks of subject 2 : 89
// Enter marks of subject 3 : 98
// Enter marks of subject 4 : 97
// Enter marks of subject 5 : 96
// rollno = 124
// name = prashant
// 5 subject marks
// 99
// 89
// 98
// 97
// 96