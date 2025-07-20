#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;
    
    while (numberOfTestCases--)
    {
        int arraySize;
        cin >> arraySize;
        
        vector<int> numbers(arraySize);
        for (int currentIndex = 0; currentIndex < arraySize; currentIndex++)
        {
            cin >> numbers[currentIndex];
        }
        
        bool isArrayNotSorted = false;
        for (int currentIndex = 0; currentIndex < arraySize - 1; currentIndex++)
        {
            if (numbers[currentIndex] > numbers[currentIndex + 1])
            {
                isArrayNotSorted = true;
                break;
            }
        }
        
        cout << (isArrayNotSorted ? "NO" : "YES") << endl;
    }
    
    return 0;
}