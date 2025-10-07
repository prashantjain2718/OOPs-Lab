// 9.3 wap in c++ overload binary + operator
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
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
}
;
int main()
{
    class demo A, B, C;
    cout << "Enter value for object A\n";
    A.input();
    cout << "Enter value for object B\n";
    B.input();
    C = A + B;
    cout << "A + B = " << endl;
    C.show();
    return 0;
}

// Output:
// Enter value for object A
// Enter value of a & b
// 4 5
// Enter value for object B
// Enter value of a & b
// 6 7
// A + B = 
// a = 10
// b = 12