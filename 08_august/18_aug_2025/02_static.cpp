// 7.2 wap in c++ to implement static data members
#include <iostream>
using namespace std;
class stat_demo
{
    static int s;
    static float f;
    static char ch;

public:
    static void show()
    {
        cout << "s = " << s << endl;
        cout << "f = " << f << endl;
        cout << "ch = " << ch << endl;
    }
};
int stat_demo::s = 20;
float stat_demo::f = 20.2;
char stat_demo::ch = 'Z';
int main()
{
    class stat_demo d1;
    stat_demo::show(); // d1.show();
    return 0;
}

// Output:
// s = 20
// f = 20.2
// ch = Z