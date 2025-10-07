//10.2 wap in c++ check if number is negative using exception handling
#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: \n";
    cin >> number;
    try
    {
        if (number < 0)
            throw "Negative number Entered\n";
        cout << "You enter = " << number;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }
    return 0;
}

// Output:
// Enter a number: 
// -6
// Error: Negative number Entered