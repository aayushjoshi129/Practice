#include <iostream>
using namespace std;

bool isPrime(int val)
{
    for (int i = 2; i <= val / i; i++)
    {
        if (val % i == 0)
        {
            return false;
        }
    }
    return true;
}

int deleteElement(int arr[], int n, int x)
{
    // Search x in array
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    // If x found in array
    if (i < n)
    {
        // reduce size of array and move all
        // elements on space ahead
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }

    return n;
}

int main()
{
    int n;
    cout << "Enter No. of Elements in Array : ";
    cin >> n;
    int arr[100];
    cout << "Enter the elements in array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your Input Array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "After Removing Prime Numbers from Array : " << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        int val = arr[i];
        if (isPrime(val))
        {
            deleteElement(arr, n, val);
        }
    }

}