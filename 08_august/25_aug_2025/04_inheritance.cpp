// 8.4 wap in c++ show the concept of hierarchical inheritance
#include <iostream>
using namespace std;
class book
{
protected:
    char Bname[20];
    char Aname[20];

public:
    void input()
    {
        cout << "Enter Book Name: \n";
        cin >> Bname;
        cout << "Enter Author Name: \n";
        cin >> Aname;
    }
    void show()
    {
        cout << "Book Name = " << Bname << endl;
        cout << "Author Name = " << Aname << endl;
    }
};
class detail:public book
{
protected:
    float price;
    int YoP;

public:
    void put()
    {
        cout << "Enter price\n";
        cin >> price;
        cout << "Enter year of publication\n";
        cin >> YoP;
    }
    void get()
    {
        cout << "Price = " << price << endl;
        cout << "Year of publication = " << YoP << endl;
    }
};
class allotment : public book
{
private:
    int doA;

public:
    void in()
    {
        cout << "Enter date of Allotment\n";
        cin >> doA;
    }
    void out()
    {
        cout << "date of Allotement = " << doA << endl;
    }
};
int main()
{
    class detail b;
    class allotment B;
    b.input();
    b.put();
    B.in();
    b.show();
    b.get();
    B.out();
    return 0;
}

// Output
// Enter Book Name: 
// OOPs
// Enter Author Name:
// pratham
// Enter price
// 500
// Enter year of publication
// 2025
// Enter date of Allotment
// 25
// Book Name = OOPs
// Author Name = pratham
// Price = 500
// Year of publication = 2025
// date of Allotement = 25