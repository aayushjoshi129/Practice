#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int row, col, search;
    cout << "Enter no. of Rows : ";
    cin >> row;
    cout << "Enter no. of Columns : ";
    cin >> col;
    int arr[100][100];
    cout << "Enter Elements in Array : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter Element to Search : ";
    cin >> search;
    int i = 0, j = col - 1;
    while (i < row - 1 && j >= 0)
    {
        if (search == arr[i][j])
        {
            cout << "Element Found at Index " << i << " , " << j << endl;
            break;
        }
        else if (search > arr[i][j])
        {
            i += 1;
        }
        else if (search < arr[i][j])
        {
            j -= 1;
        }
    }
}