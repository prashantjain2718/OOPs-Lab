//  3.1 wap in c++ enter student data and print using class and object
#include <iostream>
using namespace std;
class student
{
private:
    int rollno;
    char name[20];
    char cname[20];
    float fees;

public:
    void input()
    {
        cout << "Enter rollno\n";
        cin >> rollno;
        cout << "Enter name\n";
        cin >> name;
        cout << "Enter college name\n";
        cin >> cname;
        cout << "Enter fees\n";
        cin >> fees;
    }
    void show()
    {
        cout << "Student Data" << endl;
        cout << "rollno = " << rollno << endl;
        cout << "name = " << name << endl;
        cout << "college name = " << cname << endl;
        cout << "fees = " << fees << endl;
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
// Enter rollno
// 124
// Enter name
// prashant
// Enter college name
// aceit
// Enter fees
// 100000
// Student Data
// rollno = 124
// name = prashant
// college name = aceit
// fees = 100000