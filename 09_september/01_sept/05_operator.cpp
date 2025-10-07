// 9.5 wap in c++ overload unary ++ operator using friend function
#include <iostream>
using namespace std;
class demo
{
private:
    int p, q, r, s;

public:
    void input()
    {
        cout << "Enter value of P, Q, R, S: \n";
        cin >> p >> q >> r >> s;
    }
    void show()
    {
        cout << "P = " << p << endl
             << "Q = " << q << endl;
        cout << "R = " << r << endl
             << "S = " << s << endl;
    }
    friend void increment(demo &obj);
};
void increment(demo &obj)
{
    obj.p++;
    obj.q++;
    obj.r++;
    obj.s++;
}
int main()
{
    class demo d;
    d.input();
    cout << "Before Increment:\n";
    d.show();
    increment(d);
    cout << "After Increment:\n";
    d.show();
    return 0;
}

// Output:
// Enter value of P, Q, R, S:
// 3 4 5 6
// Before Increment:
// P = 3
// Q = 4
// R = 5
// S = 6
// After Increment:
// P = 4
// Q = 5
// R = 6
// S = 7