#include <iostream>
using namespace std;
class demo
{
   public:
   demo()
   {
    cout << "Me Vishnu hu, The constructor" << endl;
   }
   ~demo()
   {
    cout << "Me Shiva hu, The destructor" << endl;
   }
};
int main()
{
    class demo d;
    return 0;
}