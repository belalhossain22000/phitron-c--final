#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arraySize;
    cin >> arraySize;

    vector<long long int> originalNumbers(arraySize);
    vector<long long int> prefixSums(arraySize);

    for (int index = 0; index < arraySize; index++)
    {
        cin >> originalNumbers[index];
    }

    prefixSums[0] = originalNumbers[0];

    for (int index = 1; index < arraySize; index++)
    {
        prefixSums[index] = prefixSums[index - 1] + originalNumbers[index];
    }

    int leftPointer = 0;
    int rightPointer = arraySize - 1;

    while (leftPointer <= rightPointer)
    {

        long long int temporaryValue = prefixSums[leftPointer];
        prefixSums[leftPointer] = prefixSums[rightPointer];
        prefixSums[rightPointer] = temporaryValue;

        leftPointer++;
        rightPointer--;
    }

    for (int index = 0; index < arraySize; index++)
    {
        cout << prefixSums[index] << " ";
    }

    return 0;
}