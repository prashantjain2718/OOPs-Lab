// Main objective: write program to understand function templates and class templates
// 11.1 wap in c++ find max between two different number using function template
#include <iostream>
using namespace std;
template <class FUNC>
FUNC max2(FUNC a, FUNC b)
{
    return a > b ? a : b;
}
int main()
{
    int x, y;
    float f1, f2;
    char ch1, ch2;
    cout << "enter two int: ";
    cin >> x >> y;
    cout << "enter two float: ";
    cin >> f1 >> f2;
    cout << "enter two char: ";
    cin >> ch1 >> ch2;
    cout << "max integer: " << max2(x, y) << endl;
    cout << "max float: " << max2(f1, f2) << endl;
    cout << "max char: " << max2(ch1, ch2) << endl;
    return 0;
}

// Output:
// enter two int: 2 4
// enter two float: 4.5 3.6
// enter two char: a d
// max integer: 4
// max float: 4.5
// max char: d