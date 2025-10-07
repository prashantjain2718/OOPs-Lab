// 8.2 wap in c++ show the concept of multi level inheritance
#include <iostream>
using namespace std;
class student
{
protected:
    char name[20];
    int age;

public:
    void input()
    {
        cout << "Enter name\n";
        cin >> name;
        cout << "Enter age\n";
        cin >> age;
    }
    void show()
    {
        cout << "name = " << name << endl;
        cout << "age = " << age << endl;
    }
};
class detail : public student
{
private:
    char fname[20];
    float fees;

public:
    void in()
    {
        cout << "Enter father name\n";
        cin >> fname;
        cout << "Enter college fees\n";
        cin >> fees;
    }
    void out()
    {
        cout << "Father name = " << fname << endl;
        cout << "Fees = " << fees << endl;
    }
};
class marks : public detail
{
private:
    int sub1, sub2, sub3, sub4, sub5;
    float total, per;

public:
    void put()
    {
        cout << "Enter 5 subject Marks\n";
        cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    }
    void get()
    {
        total = sub1 + sub2 + sub3 + sub4 + sub5;
        per = (total / 500) * 100;
        cout << "Total = " << total << endl;
        cout << "Percent = " << per << endl;
    }
};
int main()
{
    class marks m;
    m.input();
    m.in();
    m.put();
    m.show();
    m.out();
    m.get();
    return 0;
}


// Output:
// Enter name
// prashant
// Enter age
// 20
// Enter father name
// pankaj
// Enter college fees
// 100000 
// Enter 5 subject Marks
// 99 98 97 99 97
// name = prashant
// age = 20
// Father name = pankaj
// Fees = 100000
// Total = 490
// Percent = 98