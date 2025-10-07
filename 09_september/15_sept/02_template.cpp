// 11.2 wap in c++ swap two different number using function template
#include <iostream>
using namespace std;
template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    float f1, f2;
    char ch1, ch2;
    cout << "enter two integer: \n";
    cin >> x >> y;
    cout << "enter two float:\n";
    cin >> f1 >> f2;
    cout << "enter two character:\n";
    cin >> ch1 >> ch2;
    cout << "Before Swapping: \n";
    cout << "Integer x = " << x << endl;
    cout << "Integer y = " << y << endl;
    cout << "Float f1 = " << f1 << endl;
    cout << "Float f2 = " << f2 << endl;
    cout << "Character ch1 = " << ch1 << endl;
    cout << "Character ch2 = " << ch2 << endl;
    mySwap(x, y);
    mySwap(f1, f2);
    mySwap(ch1, ch2);
    cout << "After Swapping: \n";
    cout << "Integer x = " << x << endl;
    cout << "Integer y = " << y << endl;
    cout << "Float f1 = " << f1 << endl;
    cout << "Float f2 = " << f2 << endl;
    cout << "Character ch1 = " << ch1 << endl;
    cout << "Character ch2 = " << ch2 << endl;
    return 0;
}

// Output:
// enter two integer: 
// 4 5
// enter two float:
// 5.4 6.5
// enter two character:
// c b  
// Before Swapping: 
// Integer x = 4
// Integer y = 5
// Float f1 = 5.4
// Float f2 = 6.5
// Character ch1 = c
// Character ch2 = b
// After Swapping: 
// Integer x = 5
// Integer y = 4
// Float f1 = 6.5
// Float f2 = 5.4
// Character ch1 = b
// Character ch2 = c