// 3.3 wap in c++ enter three number and find the maximum, mid, and minimum number using class and object
#include <iostream>
using namespace std;
class maxmin
{
private:
    int a, b, c;

public:
    void input();
    void mmm();
};
void maxmin ::input()
{
    cout << "Enter value of a,b,c\n";
    cin >> a >> b >> c;
}
void maxmin ::mmm()
{
    int max, mid, min;
    if ((a > b) && (a > c))
    {
        max = a;
        mid = (b > c) ? b : c;
        min = (b < c) ? b : c;
    }
    else if ((b > a) && (b > c))
    {
        max = b;
        mid = (a > c) ? a : c;
        min = (a < c) ? a : c;
    }
    else
    {
        max = c;
        mid = (a > b) ? a : b;
        min = (a < b) ? a : b;
    }
    cout << "Max = " << max << endl;
    cout << "Middle = " << mid << endl;
    cout << "Min = " << min << endl;
}
int main()
{
    class maxmin mm;
    mm.input();
    mm.mmm();
    return 0;
}

// Output:
// Enter value of a,b,c
// 2 3 5
// Max = 5
// Middle = 3
// Min = 2