// 1.2 WAP in c++ insert two no. and perform all arithmatic operations

#include <iostream>
using namespace std;
int main()
{
    int a, b, add, sub, mul, div, rem;
    cout << "Enter two numbers\n";
    cin >> a >> b;
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;
    cout << "Addition = " << add << endl;
    cout << "Subtraction = " << sub << endl;
    cout << "Multiplication = " << mul << endl;
    cout << "Division = " << div << endl;
    cout << "Remainder = " << rem << endl;
    return 0;
}

// Output:
// Enter two numbers
// 3 2
// Addition = 5
// Subtraction = 1
// Multiplication = 6
// Division = 1
// Remainder = 1