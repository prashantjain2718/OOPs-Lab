// 11.5 wap in c++ swap different datatypes using class template
#include <iostream>
using namespace std;
template <class T>
class myswap
{
    public:
    void swapvalue(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
};
int main()
{
    myswap<int> s1;
    int x, y;
    cout << "Enter two integer no\n";
    cin >> x >> y;
    cout << "Before Swapping: " << "\nx = " << x << "\ny = " << y << endl;
    s1.swapvalue(x, y);
    cout << "After Swapping: " << "\nx = " << x << "\ny = " << y << endl;
    myswap<float> s2;
    float p, q;
    cout << "Enter two float no\n";
    cin >> p >> q;
    cout << "Before Swapping: " << "\np = " << p << "\nq = " << q << endl;
    s2.swapvalue(p, q);
    cout << "After Swapping: " << "\np = " << p << "\nq = " << q << endl;
    return 0;
}

// Output:
// Enter two integer no
// 4 5
// Before Swapping: 
// x = 4
// y = 5
// After Swapping:
// x = 5
// y = 4
// Enter two float no
// 5.6 7.6
// Before Swapping: 
// p = 5.6
// q = 7.6
// After Swapping:
// p = 7.6
// q = 5.6