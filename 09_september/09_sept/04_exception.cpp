// 10.4 wap in c++ show exception handling throwing exception int a - b where a > b

#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    int x, y;
    bool m;
    cout << "Enter value of x and y\n";
    cin >> x >> y;
    m = x > y ? true : false;
    try
    {
        if (m)
        {
            cout << "Subtraction = " << x - y << endl;
        }
        else
        {
            throw("Subtraction not Possible");
        }
    }
    catch (const char *E)
    {
        cout << "Caught an Exception\n";
        cout << E << endl;
    }
    return 0;
}

// Output:
// Enter value of x and y
// 4 5
// Caught an Exception
// Subtraction not Possible