// 11.4 wap in c++ add different datatypes using class template
#include <iostream>
using namespace std;
template <class T>
class Add
{
    private:
    T num1, num2;
    public:
    Add(T a, T b)
    {
        num1 = a;
        num2 = b;
    }
    T getsum()
    {
        return num1 + num2;
    }
};
int main()
{
    int x,y;
    cout << "Enter two integer no\n";
    cin >> x >> y;
    Add<int> intadd(x,y);
    cout << "Sum of two integers = " << intadd.getsum()<<endl;
    float p,q;
    cout << "Enter two float no\n";
    cin >> p >> q;
    Add<float> floatadd(p,q);
    cout << "Sum of two float no = " << floatadd.getsum()<<endl;
    return 0;
}
// Output:
// Enter two integer no
// 4 5
// Sum of two integers = 9
// Enter two float no
// 1.2 3.3
// Sum of two float no = 4.5