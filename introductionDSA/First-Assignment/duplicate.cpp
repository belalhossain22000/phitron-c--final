#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arraySize;
    cin >> arraySize;

    if (arraySize <= 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> numbers(arraySize);
    for (int index = 0; index < arraySize; index++)
    {
        cin >> numbers[index];
    }

    sort(numbers.begin(), numbers.end());

    for (int currentIndex = 1; currentIndex < arraySize; currentIndex++)
    {
        if (numbers[currentIndex] == numbers[currentIndex - 1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}