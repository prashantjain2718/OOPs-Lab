// 6.2 wap in c++ find the maximum between two different classes using friend function
#include <iostream>
using namespace std;
class second;
class first
{
    int fx;

public:
    void inputf(int x)
    {
        fx = x;
    }
    friend void max(first, second);
};
class second
{
    int sx;

public:
    void inputs(int x)
    {
        sx = x;
    }
    friend void max(first, second);
};
void max(first a, second b)
{
    if (a.fx > b.sx)
        cout << a.fx << " is greater than " << b.sx;
    else
        cout << b.sx << " is greater than " << a.fx;
}
int main()
{
    class first f;
    class second s;
    f.inputf(40);
    s.inputs(30);
    max(f, s);
}

// Output:
// 40 is greater than 30