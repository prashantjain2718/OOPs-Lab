// 11.3 wap in c++ find the max, min and add two classes using template
#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}
template <class T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}
template <class T>
T minimum(T a, T b)
{
    return a < b ? a : b;
}
int main()
{
    int x, y;
    cout << "Enter value of x & y\n";
    cin >> x >> y;
    cout << "Addition of two int = " << add(x, y) << endl;
    cout << "Max int = " << maximum(x, y) << endl;
    cout << "Min int = " << minimum(x, y) << endl;
    float p, q;
    cout << "Enter two float no\n";
    cin >> p >> q;
    cout << "Add two float = " << add(p, q) << endl;
    cout << "Max float = " << maximum(p, q) << endl;
    cout << "Min float = " << minimum(p, q) << endl;
    return 0;
}

// Output:
// Enter value of x & y
// 4 5
// Addition of two int = 9
// Max int = 5
// Min int = 4
// Enter two float no
// 7.3 4.6
// Add two float = 11.9
// Max float = 7.3
// Min float = 4.6