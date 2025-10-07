// 4.4 Wap to add different types of data values using the concept of function overloading.
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
float add(float a, float b)
{
    return a + b;
}
int main()
{
    int x, y, z;
    float p, q;
    cout << "Enter 3 integer values of x, y and z\n";
    cin >> x >> y >> z;
    cout << "Enter 2 float values of p and q\n";
    cin >> p >> q;
    cout << "Add 2 integers = " << add(x, y) << endl;
    cout << "Add 3 integers = " << add(x, y, z) << endl;
    cout << "Add 2 Float no. = " << add(p, q) << endl;
    return 0;
}


// Output
// Enter 3 integer values of x, y and z
// 2 3 5
// Enter 2 float values of p and q
// 4.2 3.7
// Add 2 integers = 5
// Add 3 integers = 10
// Add 2 Float no. = 7.9