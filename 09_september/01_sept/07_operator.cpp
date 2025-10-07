// not to write in lab record 
// Experiment a Program in C++  Overload Binary operators (+,-,*, /)
#include <iostream>
using namespace std;
class demo
{
private:
    int a, b;
 
public:
    void input()
    {
        cout << "Enter value of a & b\n";
        cin >> a >> b;
    }
    demo operator+(demo obj)
    {
        demo temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
    demo operator-(demo obj)
    {
        demo temp;
        temp.a = a - obj.a;
        temp.b = b - obj.b;
        return temp;
    }
    demo operator*(demo obj)
    {
        demo temp;
        temp.a = a * obj.a;
        temp.b = b * obj.b;
        return temp;
    }
    demo operator/(demo obj)
    {
        demo temp;
        temp.a = a / obj.a;
        temp.b = b / obj.b;
        return temp;
    }
    void show()
    {
        cout << "a = " << a << endl
             << "b = " << b << endl;
    }
};
int main()
{
    class demo A, B, C, D, E, F;
    cout << "Enter value for object A\n";
    A.input();
    cout << "Enter value for object B\n";
    B.input();
    C = A + B;
    cout << "A + B = " << endl;
    C.show();
    D = A - B;
    cout << "A - B = " << endl;
    D.show();
    E = A * B;
    cout << "A * B = " << endl;
    E.show();
    F = A / B;
    cout << "A / B = " << endl;
    F.show();
    return 0;
}

// Output:
// Enter value for object A
// Enter value of a & b
// 6 5
// Enter value for object B
// Enter value of a & b
// 3 2
// A + B = 
// a = 9
// b = 7
// A - B = 
// a = 3
// b = 3
// A * B = 
// a = 18
// b = 10
// A / B = 
// a = 2
// b = 2