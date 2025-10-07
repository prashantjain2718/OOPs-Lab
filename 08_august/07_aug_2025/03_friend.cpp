// 6.3 wap in c++ to swap two numbers in different classes using friend function
#include <iostream>
using namespace std;
class B;
class A
{
private:
    int x;

public:
    void input()
    {
        cout << "Enter value of x:\n";
        cin >> x;
    }
    void display()
    {
        cout << "Value of x = " << x << endl;
    }
    friend void swap(A &, B &);
};
class B
{
private:
    int y;

public:
    void input()
    {
        cout << "Enter value of Y: \n";
        cin >> y;
    }
    void display()
    {
        cout << "Value of y = " << y << endl;
    }
    friend void swap(A &, B &);
};
void swap(A &objA, B &objB)
{
    int temp = objA.x;
    objA.x = objB.y;
    objB.y = temp;
}
int main()
{
    class A objA;
    class B objB;
    objA.input();
    objB.input();
    cout << "\nBefore Swapping: \n";
    objA.display();
    objB.display();
    swap(objA, objB);
    cout << "\nAfter Swapping: \n";
    objA.display();
    objB.display();
    return 0;
}

// Output:
// Enter value of x:
// 23
// Enter value of Y: 
// 32

// Before Swapping: 
// Value of x = 23
// Value of y = 32

// After Swapping: 
// Value of x = 32
// Value of y = 23