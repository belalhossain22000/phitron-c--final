#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    long long id;
    int math_marks;
    int eng_marks;
};

bool compare(Student a, Student b)
{
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;
    else if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;
    else
        return a.id < b.id;
}
int main()
{
    int n;
    cin >> n;

    Student students[1000];

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