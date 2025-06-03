#include <bits/stdc++.h>
using namespace std;

int main()
{
    char S[100000];

    while (cin.getline(S, 100000))
    {
        int len = strlen(S);

         string temp = "";
        for (int i = 0; i < len; i++)
        {
            if (S[i] != ' ')
            {
                temp += S[i];
            }
        }
           sort(temp.begin(), temp.end());

            cout << temp << endl;
    }

    return 0;
}