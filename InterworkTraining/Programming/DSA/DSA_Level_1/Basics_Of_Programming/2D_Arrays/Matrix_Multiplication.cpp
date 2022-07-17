#include <iostream>
using namespace std;
int main()
{
    int n1, m1, n2, m2;

    cout << "Enter No. of Rows in 1st Matrix : ";
    cin >> n1;
    cout << "Enter No. of Columnss in 1st Matrix : ";
    cin >> m1;

    int arr1[100][100], arr2[100][100], mult[100][100];
    cout << "Enter Elements in 1st Matrix : " << endl;
    for (int i1 = 0; i1 < n1; i1++)
    {
        for (int j1 = 0; j1 < m1; j1++)
        {
            cin >> arr1[i1][j1];
        }
    }

    cout << "Enter No. of Rows in 2nd Matrix : ";
    cin >> n2;
    cout << "Enter No. of Columnss in 2nd Matrix : ";
    cin >> m2;

    cout << "Enter Elements in 2nd Matrix : " << endl;
    for (int i2 = 0; i2 < n2; i2++)
    {
        for (int j2 = 0; j2 < m2; j2++)
        {
            cin >> arr2[i2][j2];
        }
    }

    if (m1 == n2)
    {
        cout << "The Matrix after multiplication will look like this : " << endl;
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                mult[i][j] = 0;

                for (int k = 0; k < n2; k++)    // OR it can be k < m1 as m1 is equal to n2
                {   
                    mult[i][j] += arr1[i][k] * arr2[k][j];  // Matrix Multiplication Logic
                }
                cout << mult[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid Inputs";
    }
}
