#include <iostream>
using namespace std;

int minimum(int arr[], int n)
{
    int mini = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    return mini;
}

int maximum(int arr[], int n)
{
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main()
{
    int n;
    int arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Minimum Number is " << minimum(arr, n) << endl;
    cout << "Maximum Number is " << maximum(arr, n) << endl;
    return 0;
}