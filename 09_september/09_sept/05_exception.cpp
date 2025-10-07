// 10.5 wap in c++ enter n number in array where a number greater than 100 is taken an exception is throwed
#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cout << "How many numbers you want to enter: ";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        try
        {
            if (arr[i] > 100)
                throw "Greater than 100";
        }
        catch (const char *E)
        {
            cout << arr[i] << ": " << E << endl;
        }
    }
    return 0;
}

// Output:
// How many numbers you want to enter: 5
// Enter 5 numbers:
// 101
// 99
// 87
// 102
// 105
// 101: Greater than 100
// 102: Greater than 100
// 105: Greater than 100