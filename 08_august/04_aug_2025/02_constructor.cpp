// 5.2 wap in c++ to demonstrate parameterized constructors
#include <iostream>
using namespace std;
class rectangle
{
    int length, breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Area = " << area() << endl;
    }
};
int main()
{
    int l1, b1, l2, b2;
    cout << "Enter length and breadth for rectangle 1 \n";
    cin >> l1 >> b1;
    cout << "Enter length and breadth for rectangle 2 \n";
    cin >> l2 >> b2;
    rectangle r1(l1, b1);
    rectangle r2(l2, b2);
    cout << "rectangle 1:\n";
    r1.display();
    cout << "rectangle 2:\n";
    r2.display();
}

// Output:
// Enter length and breadth for rectangle 1 
// 2 5
// Enter length and breadth for rectangle 2 
// 3 4
// rectangle 1:
// Length = 2
// Breadth = 5
// Area = 10
// rectangle 2:
// Length = 3
// Breadth = 4
// Area = 12