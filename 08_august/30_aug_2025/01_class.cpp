#include <iostream>
using namespace std;
class student
{
    private:
    int rollno;
    char name[30];
    float fees;
    public:
    void input()
    {
        cout << "Enter rollno., name and fees: \n";
        cin >> rollno >> name >> fees;
    }
    void show()
    {
        cout << "Roll no.: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Fees: " << fees << endl;
    }
};
int main()
{
    struct student s;
    s.input();
    s.show();
    return 0;
}

// Output:
// Enter rollno., name and fees:
// 124
// prashant
// 100000
// Roll no.: 124
// Name: prashant
// Fees: 100000