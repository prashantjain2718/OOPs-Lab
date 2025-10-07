// #include <bits/stdc++.h>
// Experiment 6 main objective
// implement friend function to access private data of a class and using of this pointer
// 6.1 Wap in c++ find a sqr of a function using friend function
#include <iostream>
using namespace std;
class demo
{
    int fx;

public:
    void input()
    {
        cout << "Enter a no you want to square\n";
        cin >> fx;
    }
    friend int findsqr(demo);
};
int findsqr(demo d)
{
    return d.fx * d.fx;
}
int main()
{
    class demo s;
    s.input();
    cout << "Square = " << findsqr(s);
    return 0;
}

// Output:
// Enter a no you want to square
// 4
// Square = 16