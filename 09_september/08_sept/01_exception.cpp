// objective: write program to understand exception handling techniques
// three keywords: try, throw, catch
// try detects error
// throws check if it can be corrected then send it to catch
// catch does the further exception handling process
// 10.1 wap in c++ show the concept of exception handling
#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter value of a & b \n";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw "division by zero not allowed";
        int result = a / b;
        cout << "Result = " << result << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }
    return 0;
}

// Output:
// Enter value of a & b 
// 5 0
// Error: division by zero not allowed