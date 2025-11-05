// 2.4 WAP in c++ enter n student records with m subject marks using array within structure and array with structure.
#include <iostream>
using namespace std;
struct student
{
    char name[30];
    int roll;
    int marks[10];
};
int main()
{
    struct student s[10];
    int n, m, i, j;
    cout << "Enter number of students: ";
    cin >> n;
    cout << "Enter number of subjects: ";
    cin >> m;
    for (i = 0; i < n; i++)
    {
        cout << "Enter details for Subject " << i + 1 << ":\n";
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter roll number: ";
        cin >> s[i].roll;
        for (j = 0; j < m; j++)
        {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> s[i].marks[j];
        }
    }
    cout << "Student Records: \n";
    for (i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ":\n";
        cout << "Name: " << s[i].name << "\n";
        cout << "Roll No.: " << s[i].roll << "\n";
        cout << "Marks:\n";
        for (j = 0; j < m; j++)
        {
            cout << "Subject " << j + 1 << ": " << s[i].marks[j] << "\n";
        }
    }
    return 0;
}

// Output:
// Enter number of students: 2
// Enter number of subjects: 3
// Enter details for Subject 1:
// Enter name: ram
// Enter roll number: 101
// Enter marks for subject 1: 100
// Enter marks for subject 2: 98
// Enter marks for subject 3: 97
// Enter details for Subject 2:
// Enter name: raju
// Enter roll number: 115
// Enter marks for subject 1: 89
// Enter marks for subject 2: 98
// Enter marks for subject 3: 90
// Student Records: 
// Student 1:
// Name: ram
// Roll No.: 101
// Marks:
// Subject 1: 100
// Subject 2: 98
// Subject 3: 97
// Student 2:
// Name: raju
// Roll No.: 115
// Marks:
// Subject 1: 89
// Subject 2: 98
// Subject 3: 90