// Objective: implement different types of inheritance and virtual functions
// 8.1 wap in c++ show the concept of single level inheritance
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
int main()
{
    class detail st;
    st.input();
    st.in();
    st.show();
    st.out();
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
// name = prashant
// age = 20
// Father name = pankaj
// Fees = 100000