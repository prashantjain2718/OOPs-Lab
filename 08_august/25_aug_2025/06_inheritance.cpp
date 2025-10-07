// 8.6 wap in c++ show the concept of virtual base class
#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Hello from virtual base class\n";
    }
};
class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public virtual A
{
};
int main()
{
    class D obj;
    obj.show();
    return 0;
}

// Output:
// Hello from virtual base class