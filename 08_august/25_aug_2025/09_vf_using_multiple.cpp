#include <iostream>
using namespace std;
class base1
{
public:
    virtual void show()
    {
        cout << "Base1 class show function\n";
    }
};
class base2
{
public:
    virtual void show()
    {
        cout << "Base2 class show function\n";
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "Derived class show function\n";
    }
};
int main()
{
    base1 *ptr1;
    base2 *ptr2;
    base1 b1;
    base2 b2;
    derived d;
    ptr1 = &b1;
    ptr1->show();
    ptr2 = &b2;
    ptr2->show();
    ptr1 = &d;
    ptr1->show();
    ptr2 = &d;
    ptr2->show();
    return 0;
}

// Output:
// Base1 class show function
// Base2 class show function
// Derived class show function
// Derived class show function