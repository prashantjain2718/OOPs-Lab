// 9.2 wap in c++ overload unary ++ and unary -- operator and print output
#include <iostream>
using namespace std;
class demo
{
    private:
    int p,q,r,s;
    public: 
    void input()
    {
        cout << "Enter value of p, q, r, s\n";
        cin >> p >> q >> r >> s;
    }
    void update()
    {
        p++;
        q++;
        r--;
        s--;
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
    cout << "Before Updation:\n";
    d.show();
    cout << "After Updation:\n";
    d.update();
    d.show();
    return 0;
}

// Output:
// Enter value of p, q, r, s
// 1 2 3 4
// Before Updation:
// P = 1
// Q = 2
// R = 3
// S = 4
// After Updation:
// P = 2
// Q = 3
// R = 2
// S = 3