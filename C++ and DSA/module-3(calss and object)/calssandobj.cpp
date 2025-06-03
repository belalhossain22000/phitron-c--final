#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int gap;
    double roll;
};

int main()
{
    Student s1, s2;
    cin.getline(s1.name, 100);
    cin >> s1.gap >> s1.roll;
    cin.ignore();
    cin.getline(s2.name, 100);
    cin >> s2.gap >> s2.roll;

    cout << s1.name << " " << s1.gap << " " << s1.roll  << endl;
    cout << s2.name  << " " << s2.gap << " " << s2.roll << " " << endl;
    return 0;
}