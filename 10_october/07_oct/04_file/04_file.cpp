// 12.4 wap in c++ reading and writing student data using file handling concept
#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    char name[20];
    int age;
    float fees;

public:
    void input()
    {
        cout << "Enter St. name\n";
        cin >> name;
        cout << "Enter age\n";
        cin >> age;
        cout << "Enter fees\n";
        cin >> fees;
    }
    void show()
    {
        cout << "name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "fees = " << fees << endl;
    }
    void write(fstream &file)
    {
        file << name << endl
             << age << endl
             << fees << endl;
    }
    void read(fstream &file)
    {
        file >> name >> age >> fees;
    }
};
int main()
{
    fstream file;
    file.open("obj.txt", ios::in | ios::out);
    if (!file)
    {
        cout << "file could not be open\n";
        return 1;
    }
    Student p;
    cout << "Enter Student data\n";
    p.input();
    p.write(file);
    cout << "data from file\n";
    p.read(file);
    p.show();
    file.close();
    return 0;
}

// Output:
// Enter Student data
// Enter St. name
// prashant
// Enter age
// 20
// Enter fees
// 100000
// data from file
// name = prashant
// age = 20
// fees = 100000