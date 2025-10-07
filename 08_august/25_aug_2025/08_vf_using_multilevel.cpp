#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "Base Class Show function\n";
    }
};
class derived1 : public base
{
public:
    void show()
    {
        cout << "Show from Derived 1\n";
    }
};
class derived2 : public derived1
{
public:
    void show()
    {
        cout << "Show from Derived 2\n";
    }
};
int main()
{
    base *ptr;
    base b;
    derived1 d1;
    derived2 d2;
    ptr = &b;
    ptr->show();
    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
    return 0;
}

// Output:
// Base Class Show function
// Show from Derived 1
// Show from Derived 2