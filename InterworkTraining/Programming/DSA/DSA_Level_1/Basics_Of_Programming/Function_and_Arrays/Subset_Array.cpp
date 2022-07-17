#include <iostream>
#include <math.h>
using namespace std;

void Sub_Sets(int arr[], int n)
{
    int i = 0, limit = pow(2, n);
    for (i = 0; i < limit; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, r, arr[100];
    cin >> n;
    int output[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Inverse " << endl;
    display(arr, n);
    cout << endl;
    cout << "The Subsets are " << endl;
    Sub_Sets(arr, n);
}