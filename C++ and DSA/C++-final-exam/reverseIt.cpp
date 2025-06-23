#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{

    int n;
    cin >> n;

    Student students[100];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {

        char temp = students[i].section;
        students[i].section = students[n - 1 - i].section;
        students[n - 1 - i].section = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " "
             << students[i].section << " " << students[i].id << endl;
    }

    return 0;
}