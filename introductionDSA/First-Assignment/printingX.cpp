#include <iostream>
using namespace std;

int main()
{

    int gridSize;
    cin >> gridSize;

    for (int currentRow = 0; currentRow < gridSize; currentRow++)
    {

        for (int currentColumn = 0; currentColumn < gridSize; currentColumn++)
        {

            if (currentRow == currentColumn && currentRow + currentColumn == gridSize - 1)
            {
                cout << 'X';
            }

            else if (currentRow == currentColumn)
            {
                cout << '\\';
            }

            else if (currentRow + currentColumn == gridSize - 1)
            {
                cout << '/';
            }

            else
            {
                cout << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}