// 8.7 show the concept of virtual function in single level inheritance
#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "Base Class show function\n";
    }
};
class derived : public base
{
public:
    void show() override
    {
        cout << "Derived Class show function\n";
    }
};
int main()
{
    base *ptr;
    class base b;
    class derived d;
    ptr = &b;
    ptr->show(); // B
    ptr = &d;
    ptr->show(); // D
    return 0;
}


// Output:
// Base Class show function
// Derived Class show function