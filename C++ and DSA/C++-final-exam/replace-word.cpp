#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string s, x;

        getline(cin, s, ' ');
        getline(cin, x);

        string result = "";
        int i = 0;

        while (i < s.length())
        {
            if (s.substr(i, x.length()) == x)
            {
                result += "#";
                i += x.length();

            }
            else
            {
                result += s[i];
                i++;
            }
        }
        cout << result << endl;
    }

    return 0;
}