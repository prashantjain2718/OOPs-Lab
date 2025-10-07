// 7.4 wap in c++ to implement constant data members
#include <iostream>
using namespace std;
class rectangle
{
private:
    const double length;
    const double width;

public:
    rectangle(double l, double w) : length(l), width(w)
    {
    }
    double Area() const
    {
        return length * width;
    }
};
int main()
{
    rectangle R(4.5, 5.0);
    cout << "Area = " << R.Area();
    return 0;
}

// Output:
// Area = 22.5