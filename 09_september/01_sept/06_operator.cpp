// 9.6 wap in c++ overload binary + operator using friend function 
#include <iostream>
using namespace std;
class demo{
private: int a, b;
public: void input(){
        cout << "Enter value of a & b\n";
        cin >> a >> b;}
    void show(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;}
    friend demo operator+(demo obj1, demo obj2);};
demo operator + (demo obj1, demo obj2){
    demo temp;
    temp.a = obj1.a+obj2.a;
    temp.b=obj1.b+obj2.b;
    return temp;}
int main(){
    class demo A,B,C;
    cout << "Enter value for object A\n"; A.input();
    cout << "Enter value for object B\n"; B.input();
    C=A+B; cout << "Result = \n";
    C.show(); return 0;
}


// Output:
// Enter value for object A
// Enter value of a & b
// 2 3
// Enter value for object B
// Enter value of a & b
// 4 5
// Result = 
// a = 6
// b = 8