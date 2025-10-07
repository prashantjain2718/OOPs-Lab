#include <iostream>
using namespace std;
struct student
{
    char name[20];
    int rollno;
    int marks[10];
} s[10];
int main()
{
    int i, j , m, n;
    cout << "How many students you want to enter: ";
    cin >> n;
    cout << "How many subject marks you want to enter: ";
    cin >> m;
    for (i = 0; i < n; i++)
    {
        cout << "Enter details of Student " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter rollno: ";
        cin >> s[i].rollno;
        cout << "Enter marks of " << m << " subjects" << endl;
        for(j = 0; j < m; j++)
        {
            cout << "Subject " << j+1 << ": ";
            cin >> s[i].marks[j];
        }
    }
    cout << "You entered: " << endl;
    for(i = 0; i<n; i++)
    {
        cout << "Details of student " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Rollno: " << s[i].rollno << endl;
        cout << "Subject Marks\n";
        for(j = 0; j<m; j++)
        {
            cout << "Subject " << j+1 <<": " << s[i].marks[j] << endl;
        }
        return 0;
    }
}