// objective: implement operator overloading concept 
// 9.1 wap in c++ overload ++ unary operator
#include <iostream>
using namespace std;
class demo
{
    private:
    int p,q,r,s;
    public:
    void input()
    {
        cout << "Enter value of p,q,r,s:\n";
        cin >> p >> q >> r >> s;
    }
    void increment()
    {
        p++;
        q++;
        r++;
        s++;
    }
    void show()
    {
        cout << "P = " << p << endl;
        cout << "Q = " << q << endl;
        cout << "R = " << r << endl;
        cout << "S = " << s << endl;
    }
};
int main()
{
    class demo d;
    d.input();
    cout << "Before Increment:\n";
    d.show();
    d.increment();
    cout << "After Increment:\n";
    d.show();
    return 0;
}

// Output:
// Enter value of p,q,r,s:
// 3 2 1 4
// Before Increment:
// P = 3
// Q = 2
// R = 1
// S = 4
// After Increment:
// P = 4
// Q = 3
// R = 2
// S = 5