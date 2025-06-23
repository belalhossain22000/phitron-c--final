#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

    int total() const
    {
        return math_marks + eng_marks;
    }
};

bool compare(Student a, Student b)
{
    if (a.total() != b.total())
        return a.total() > b.total();
    else
        return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;

    Student students[100];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " "
             << students[i].section << " " << students[i].id << " "
             << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}