#include <iostream>
#include <algorithm>
using namespace std;

bool findTriplets(int arr[], int n)
{
    // Your code here
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int sum = arr[i] + arr[r] + arr[l];
            if (sum == 0)
            {
                return true;
            }
            else if (sum < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    int arr[100];
    cout << "Enter No. of elements in Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element in the Array : ";
        cin >> arr[i];
    }
    if (findTriplets(arr, n))
    {
        cout << "The given Array forms the Triplet";
    }
    else
    {
        cout << "The given Array does not forms the Triplet";
    }
}