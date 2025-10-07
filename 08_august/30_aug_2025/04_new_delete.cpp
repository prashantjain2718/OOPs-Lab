#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int *A = new int{3};
    float *B = new float{5.2};
    char *C = new char{'B'};
    char *D = new char[20];
    strcpy(D,"Mahavatar");
    cout << "Integer: " << *A << endl;
    cout << "Float: " << *B << endl;
    cout << "Character: " << *C << endl;
    cout << "String: " << D << endl;
    delete A;
    delete B;
    delete C;
    delete[] D;
    return 0;
}

// Output:
// Integer: 3
// Float: 5.2
// Character: B
// String: Mahavatar