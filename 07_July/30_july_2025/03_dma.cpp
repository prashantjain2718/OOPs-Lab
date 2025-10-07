// 4.3 wap in c++ enter an integer number, float number, a character and a string and print using new and delete operator
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int *a = new int{3};
    float *b = new float{4.5};
    char *c = new char{'A'};
    char *d = new char[6];
    strcpy(d, "Aceit");
    cout << *a << endl;
    cout << *b << endl;
    cout << *c << endl;
    cout << d << endl;
    delete a;
    delete b;
    delete c;
    delete[] d;
}

// Output
// 3
// 4.5
// A
// Aceit