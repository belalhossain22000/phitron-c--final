#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Student s1, s2, s3;

        cin >> s1.id >> s1.name >> s1.section >> s1.marks;
        cin >> s2.id >> s2.name >> s2.section >> s2.marks;
        cin >> s3.id >> s3.name >> s3.section >> s3.marks;

        Student best = s1;

        if (s2.marks > best.marks || (s2.marks == best.marks && s2.id < best.id))
        {
            best = s2;
        }

        if (s3.marks > best.marks || (s3.marks == best.marks && s3.id < best.id))
        {
            best = s3;
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }

    return 0;
}