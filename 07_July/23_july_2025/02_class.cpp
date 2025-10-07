// 3.2 wap in c++ enter two number and perform all arithmatic operations using class and object. (Member function declaration outside the class)
#include <iostream>
using namespace std;
class operation
{
private:
    int a, b, add, sub, mul, div, rem;

public:
    void input();
    void arithmatic();
    void show();
};
void operation ::input()
{
    cout << "Enter the value of a & b\n";
    cin >> a >> b;
}
void operation ::arithmatic()
{
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;
}
void operation ::show()
{
    cout << "Addition = " << add << endl;
    cout << "Subtraction = " << sub << endl;
    cout << "Multiplication = " << mul << endl;
    cout << "Division = " << div << endl;
    cout << "Remainder = " << rem << endl;
}
int main()
{
    class operation op;
    op.input();
    op.arithmatic();
    op.show();
}

// Output:
// Enter the value of a & b
// 2 3
// Addition = 5
// Subtraction = -1
// Multiplication = 6
// Division = 0
// Remainder = 2