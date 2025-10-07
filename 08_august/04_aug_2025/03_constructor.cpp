// 5.3 wap in c++ to demonstrate copy constructor
#include <iostream>
using namespace std;
class demo
{
    int data;

public:
    demo()
    {
        data = 200;
        cout << "Default Constructor\n";
    }
    demo(int x)
    {
        data = x;
        cout << "Parameterized constructor\n";
    }
    demo(const demo &d)
    {
        data = d.data;
        cout << "Copy constructor\n";
    }
    void show()
    {
        cout << "data = " << data << endl;
    }
};
int main()
{
    demo d1(300);
    demo d2 = d1;
    demo d3;
    d3 = d1;
    demo d4 = demo(d3);
    d1.show();
    d2.show();
    d3.show();
    d4.show();
    return 0;
}

// Output
// Parameterized constructor
// Copy constructor
// Default Constructor
// Copy constructor
// data = 300
// data = 300
// data = 300
// data = 300