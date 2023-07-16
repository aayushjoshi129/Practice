#include <iostream>
#include <algorithm>
using namespace std;

int missingNumber(int arr[], int n)
{
    // Your code here
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0 && arr[i] < n && arr[i] != arr[arr[i] - 1])
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }
    return n + 1;
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

    cout << "The Smallest Positive Missing Number is " << missingNumber(arr, n) << endl;
}