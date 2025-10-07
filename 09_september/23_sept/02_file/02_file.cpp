// 12.2 wap in c++ reading and writing mobile data using file handling functions
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream rw;
    rw.open("mobile.txt", ios::out);
    char mcomp[20], model[20];
    float price;
    cout << "Enter mobile model\n";
    cin.getline(model, 20);
    cout << "Enter Mobile Company\n";
    cin.getline(mcomp, 20);
    cout << "Enter Mobile Price\n";
    cin >> price;
    rw << model << endl
       << mcomp << endl
       << price << endl;
    rw.close();
    rw.open("mobile.txt", ios::in);
    rw.getline(model, 20);
    rw.getline(mcomp, 20);
    rw >> price;
    cout << "Mobile details read from file\n";
    cout << "Model = " << model << endl;
    cout << "mobile company = " << mcomp << endl;
    cout << "price = " << price << endl;
    rw.close();
    return 0;
}

// Output:
// Enter mobile model
// M34
// Enter Mobile Company
// Samsung  
// Enter Mobile Price
// 20000
// Mobile details read from file
// Model = M34
// mobile company = Samsung
// price = 20000