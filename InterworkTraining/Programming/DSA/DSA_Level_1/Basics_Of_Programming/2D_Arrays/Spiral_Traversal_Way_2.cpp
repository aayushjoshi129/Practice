#include <iostream>
using namespace std;
int main()
{
    int row, col;
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
    
    // from left --> bottom --> right --> top

    int mincol = 0, minrow = 0, maxrow = row - 1, maxcol = col - 1;
    while (minrow < row && mincol < col) // Condition to terminate loops OR traverse all elements;
    {

        // Spiral Printing Started

        // Printing from top to bottom
        // Left Wall

        for (int i = minrow, j = mincol; i <= maxrow; i++)
        {
            cout << arr[i][j] << endl;
        }
        mincol += 1;

        // Printing Left to right of down
        // Bottom Wall

        for (int i = maxrow, j = mincol; j <= maxcol; j++)
        {
            cout << arr[i][j] << endl;
        }
        maxrow -= 1;

        // Printing bottom to top of right
        // Right Wall

        for (int i = maxrow, j = maxcol; i >= minrow; i--)
        {
            cout << arr[i][j] << endl;
        }
        maxcol -= 1;

        // Printing right to left of top
        // Top Wall

        for (int i = minrow, j = maxcol; j >= mincol; j--)
        {
            cout << arr[i][j] << endl;
        }
        minrow += 1;
    }
}