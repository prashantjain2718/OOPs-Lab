// 4.2 wap in c++ insert and print student name & age and delete the space using concept of class
#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];

public:
    void input()
    {
        cout << "Enter rollno & name\n";
        cin >> rollno >> name;
    }
    void show()
    {
        cout << "rollno = " << rollno << endl;
        cout << "name = " << name << endl;
    }
};
int main()
{
    class student *s = new student;
    s->input();
    s->show();
    delete s;
    return 0;
}

// Output: 
// Enter rollno & name
// 124 prashant
// rollno = 124
// name = prashant