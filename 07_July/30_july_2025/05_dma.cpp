// 4.5 Wap in c++ find area of rectangle, area of square and area of circle using function overloading concept
#include <iostream>
using namespace std;
int area(int length, int breadth)
{
    return length * breadth;
}
int area(int side)
{
    return side * side;
}
float area(float radius)
{
    return 3.14 * radius * radius;
}
int main()
{
    int length, breadth, side;
    float radius;
    cout << "Enter length and breadth of a rectangle: \n";
    cin >> length >> breadth;
    cout << "Enter side of a square: \n";
    cin >> side;
    cout << "Enter radius of a circle: \n";
    cin >> radius;
    cout << "Area of rectangle = " << area(length, breadth) << endl;
    cout << "Area of square = " << area(side) << endl;
    cout << "Area of circle = " << area(radius) << endl;
    return 0;
}


// output 
// Enter length and breadth of a rectangle: 
// 4 5
// Enter side of a square: 
// 6
// Enter radius of a circle: 
// 3
// Area of rectangle = 20
// Area of square = 36
// Area of circle = 28.26