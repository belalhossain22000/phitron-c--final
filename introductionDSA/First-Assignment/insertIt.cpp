#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sizeOfFirstArray;
    cin >> sizeOfFirstArray;
    vector<int> firstArray(sizeOfFirstArray);

    for (int i = 0; i < sizeOfFirstArray; i++)
    {
        cin >> firstArray[i];
    }

    int sizeOfSecondArray;
    cin >> sizeOfSecondArray;
    vector<int> secondArray(sizeOfSecondArray);
    for (int i = 0; i < sizeOfSecondArray; i++)
    {
        cin >> secondArray[i];
    }

    int insertionIndex;
    cin >> insertionIndex;

    firstArray.insert(firstArray.begin() + insertionIndex, secondArray.begin(), secondArray.end());

    for (int element : firstArray)
    {
        cout << element << " ";
    }

    return 0;
}