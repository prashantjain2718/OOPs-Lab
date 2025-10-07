#include <iostream>
using namespace std;
class B;
class A
{
private:
    int fx;

public:
    void finput(int x)
    {
        fx = x;
    }
    void show()
    {
        cout << "First class: " << fx << endl;
    }
    friend void swap(A &, B &);
};
class B
{
private:
    int sx;

public:
    void sinput(int x)
    {
        sx = x;
    }
    void show()
    {
        cout << "Second Class: " << sx << endl;
    }
    friend void swap(A &, B &);
};
void swap(A &obja, B &objb)
{
    int temp;
    temp = obja.fx;
    obja.fx = objb.sx;
    objb.sx = temp;
}
int main()
{
    class A obja;
    class B objb;
    obja.finput(20);
    objb.sinput(30);
    cout << "Before swapping: " << endl;
    obja.show();
    objb.show();
    cout << "After swapping: " << endl;
    swap(obja, objb);
    obja.show();
    objb.show();
    return 0;
}


// Output:
// Before swapping: 
// First class: 20
// Second Class: 30
// After swapping: 
// First class: 30
// Second Class: 20