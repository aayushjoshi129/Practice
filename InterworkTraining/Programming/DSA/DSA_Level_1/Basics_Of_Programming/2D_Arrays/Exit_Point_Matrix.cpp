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

    int dir = 0; // 0 is for east , 1 is for south , 2 is for west and 3 is for north
    int srow = 0, scol = 0;
    while (true)
    {
        dir = (dir + arr[srow][scol]) % 4;
        
        // to counter directions 
        if (dir == 0) // east
        { 
            scol += 1;
        }
        else if (dir == 1) // south
        {
            srow += 1;
        }
        else if (dir == 2) // west
        {
            scol -= 1;
        }
        else if (dir == 3) // north
        {
            srow -= 1;
        }

        // to counter exit point
        if (srow < 0)
        {
            srow++;
            break;
        }
        else if (scol < 0)
        {
            scol++;
            break;
        }
        else if (srow == row)
        {
            srow--;
            break;
        }
        else if (scol == col)
        {
            scol--;
            break;
        }
    }
    cout << endl<< srow << " " << scol << endl;
}