// main objective: program to understand different type of constructor and destructor
// 5.1 wap in c++ to enter student data using default constructor
#include <iostream>
using namespace std;
class student
{
private:
    char name[20]; 
    int rollno;

public:
    student()
    {
        cout << "Enter rollno & name: \n";
        cin >> rollno >> name;
    }
    void show()
    {
        cout << "Rollno = " << rollno << endl;
        cout << "Name = " << name << endl;
    }
};
int main()
{
    class student st;
    st.show();
    return 0;
}

// Output:
// Enter rollno & name: 
// 124 prashant
// Rollno = 124
// Name = prashant