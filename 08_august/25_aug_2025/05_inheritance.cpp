// 8.5 wap in c++ show the concept of hybrid inheritance
#include <iostream>
using namespace std;

class Person
{
protected:
    char name[20];

public:
    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

class Department
{
protected:
    char dept[20];

public:
    void getDept()
    {
        cout << "Enter Department: ";
        cin >> dept;
    }
    void showDept()
    {
        cout << "Department: " << dept << endl;
    }
};

class Salary : public Person
{
protected:
    int pay;

public:
    void getPay()
    {
        cout << "Enter Salary: ";
        cin >> pay;
    }
    void showPay()
    {
        cout << "Salary: " << pay << endl;
    }
};

class Employee : public Salary, public Department
{
    int id;

public:
    void getData()
    {
        cout << "Enter ID: ";
        cin >> id;
        getName();
        getDept();
        getPay();
    }
    void showData()
    {
        cout << "\n--- Employee Details ---\n";
        cout << "ID: " << id << endl;
        showName();
        showDept();
        showPay();
    }
};

int main()
{
    Employee e;
    e.getData();
    e.showData();
    return 0;
}

// Output:
// Enter ID: 101
// Enter Name: prashant
// Enter Department: sde
// Enter Salary: 2000000

// --- Employee Details ---
// ID: 101
// Name: prashant
// Department: sde
// Salary: 2000000