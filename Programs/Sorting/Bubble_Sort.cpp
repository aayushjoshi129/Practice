// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    bool isSwapped = false;
    for (int i = 0; i < n - 1; i++)
    // for round n-1
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false)
        {
            // already sorted
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, arr[100];
    cout << "Enter no. of Elements in Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element in Array : ";
        cin >> arr[i];
    }
    bubbleSort(arr, n);
}