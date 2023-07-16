#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int part = low;

    for (int j = low; j < high; ++j)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[part], arr[j]);
            ++part;
        }
    }

    swap(arr[part], arr[high]);
    return (part);
}

void quickSort(int arr[], int low, int high)
{
    // code here
    if (low < high)
    {
        int pivoit = partition(arr, low, high);
        quickSort(arr, low, pivoit - 1);
        quickSort(arr, pivoit + 1, high);
    }
}



void display(int arr[], int n)
{
    cout << "The Sorted Array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    int arr[100];
    cout << "Enter No. of elements in Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element in the Array: ";
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    display(arr,n);
    return 0;
}