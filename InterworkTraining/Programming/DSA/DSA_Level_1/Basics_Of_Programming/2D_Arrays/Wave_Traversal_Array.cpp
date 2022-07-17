#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter No. of Rows in Matrix : ";
    cin >> m;
    cout << "Enter No. of Columns in Matrix : ";
    cin >> n;
    int arr[100][100];
    cout << "Enter Elements in Matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl
         << "The Matrix look like this : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "The Matrix view look like this : " << endl;

    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " -> ";
            }
        }
        else
        {
            for (int i = m-1 ; i >= 0; i--)
            {
                cout << arr[i][j] << " -> ";
            }
        }
    }
}