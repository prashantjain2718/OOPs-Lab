// 5.4 wap in c++ to demonstrate destructor
#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "Constructor called\n";
    }
    ~demo()
    {
        cout << "Destructor called\n";
    }
};
int main()
{
    class demo d;
    return 0;
}

// Output:
// Constructor called
// Destructor called