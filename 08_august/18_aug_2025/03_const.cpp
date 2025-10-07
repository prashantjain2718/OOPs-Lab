// 7.3 wap in c++ to implement constant member functions

#include <iostream>
using namespace std;
class circle
{
private:
    const double radius;

public:
    circle(double r) : radius(r)
    {
        radius;
    }
    double Area() const
    {
        return 3.14 * radius * radius;
    }
    double getradius() const
    {
        return radius;
    }
};
int main()
{
    circle c(50);
    cout << "Radius = " << c.getradius() << endl;
    cout << "Area = " << c.Area();
    return 0;
}

// Output:
// Radius = 50
// Area = 7850