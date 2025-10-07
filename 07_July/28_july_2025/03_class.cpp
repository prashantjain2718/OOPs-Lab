// 3.6 wap in c++ enter n student records having m subjects and print details using array within class and array of objects
#include <iostream>
using namespace std;
class student
{
private:
    int rollno;
    char name[20];
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
    class student st[10];
    int j, m;
    cout << "how many student record you want to enter \n";
    cin >> m;
    cout << "student data\n";
    for (j = 0; j < m; j++)
    {
        st[j].input();
        st[j].show();
    }
    return 0;
}