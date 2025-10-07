// 4.6 wap in c++ find the maximum number between two different number using function overloading concept
#include <iostream>
using namespace std;
int main()
{
    int x, y, imax;
    float f1, f2, fmax;
    char ch1, ch2, cmax;
    int max(int, int);
    float max(float, float);
    char max(char, char);
    cout << "Enter two numbers: \n";
    cin >> x >> y;
    cout << "Enter two float numbers: \n";
    cin >> f1 >> f2;
    cout << "Enter two characters: \n";
    cin >> ch1 >> ch2;
    imax = max(x, y);
    fmax = max(f1, f2);
    cmax = max(ch1, ch2);
    cout << "Int max = " << imax << endl;
    cout << "Float max = " << fmax << endl;
    cout << "Character max = " << cmax << endl;
    return 0;
}
int max(int x, int y)
{
    return x > y ? x : y;
}
float max(float x, float y)
{
    return x > y ? x : y;
}
char max(char x, char y)
{
    return x > y ? x : y;
}


// Output:
// Enter two numbers:
// 2 3
// Enter two float numbers: 
// 3.4 5.3
// Enter two characters: 
// a A
// Int max = 3
// Float max = 5.3
// Character max = a