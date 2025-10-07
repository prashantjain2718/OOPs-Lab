// 4.1 wap in c++ enter 5 subject marks and print gpa
#include <iostream>
using namespace std;
int main()
{
    int i;
    int *marks = new int[5];
    float sum = 0;

    cout << "Enter 5 subject marks\n";
    for (i = 0; i < 5; i++)
    {
        cout << "Subject: " << i + 1 << endl;
        cin >> *(marks + i);
        sum += *(marks + i);
    }
    float average = sum / 5;
    float gpa = average / 10;
    cout << "Total marks = " << sum << endl;
    cout << "Average marks = " << average << endl;
    cout << "GPA = " << average << endl;
    delete[] marks;
    return 0;
}

// output
// Enter 5 subject marks
// Subject: 1
// 89
// Subject: 2
// 90
// Subject: 3
// 98
// Subject: 4
// 99
// Subject: 5
// 97
// Total marks = 473
// Average marks = 94.6
// GPA = 9.46