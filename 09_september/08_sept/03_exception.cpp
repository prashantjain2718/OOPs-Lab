// // 10.3 wap in c++ check entered number is even using exception handling
// #include <iostream>
// #include <exception>
// using namespace std;
// int main()
// {
//     int number;
//     cout << "Enter a number: \n";
//     cin >> number;
//     try
//     {
//         if (number % 2 == 0)
//             throw "Even number Entered\n";
//         cout << "You enter = " << number;
//     }
//     catch (const char *msg)
//     {
//         cout << "Error: " << msg << endl;
//     }
//     return 0;
// }

// // Output:
// // Enter a number:
// // 4
// // Error: Even number Entered

#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    int x;
    cout << "Enter value of x:\n";
    cin >> x;
    try
    {
        if (x % 2 == 0)
        {
            cout << "Number " << x << " is even";
        }
        else
        {
            throw "Not Even";
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
// Enter value of x:
// 5
// Caught an Exception
// Not Even