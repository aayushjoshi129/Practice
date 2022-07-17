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
    cout << "Enter Elements in Array : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }


// Spiral Printing Started

    // Printing from top to bottom
    int mincol = 0;
    while (mincol < 1)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][mincol] << endl;
        }
        mincol += 1;
    }

    // Printing Left to right of down
    int maxrow=row-1;
    while (maxrow < row)
    {
        for (int i = 1; i < col; i++)
        {
            cout << arr[maxrow][i] << endl;
        }
        maxrow += 1;
    }

    // Printing bottom to top of right
    int maxcol = col -1;
    while (maxcol < col)
    {
        for (int i = row-1-1; i>=0; i--)
        {
            cout << arr[i][maxcol] << endl;
        }
        maxcol += 1;
    }

    // Printing right to left of top
    int minrow = 0;
    while (minrow < 1)
    {
        for (int i = col-1-1; i >=0; i--)
        {
            cout << arr[minrow][i] << endl;
        }
        minrow += 1;
    }
}