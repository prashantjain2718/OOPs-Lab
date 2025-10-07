//Objective: to understand the uses of constant data members and member functions & static data members and member functions
// 7.1 wap in c++ to implement static member functions
#include <iostream>
using namespace std;
class demo
{
public:
    static void show()
    {
        cout << "Demo of state function";
    }
};
int main()
{
    class demo d;
    demo::show(); // scope resolution operator because we are accessing it using class not object
    return 0;
}

// Output:
// Demo of state function