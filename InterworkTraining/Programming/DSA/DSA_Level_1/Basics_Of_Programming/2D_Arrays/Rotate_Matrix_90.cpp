#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter no. of Rows : ";
    cin >> row;
    cout << "Enter no. of Columns : ";
    cin >> col;
    int arr[100][100], trans[100][100], rotated[100][100];
    cout << "Enter Elements in Array : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Transpose of Matrix

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            trans[i][j] = arr[j][i];
        }
        cout << endl;
    }

    // Printing Original Matrix

    cout << endl
         << "The Original Matrix look like this : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Printing Transpose of Original Matrix

    cout << endl
         << "The Transpose Matrix look like this : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    // Printing 90 Degree Rotated Matrix

    int temp = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0, k = col - 1; j < col && k >= 0; j++, k--)
        {
            rotated[i][j] = trans[i][k];
        }
    }

    // Printing ROtated of Original Matrix

    cout << endl
         << "The Rotated Matrix look like this : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}