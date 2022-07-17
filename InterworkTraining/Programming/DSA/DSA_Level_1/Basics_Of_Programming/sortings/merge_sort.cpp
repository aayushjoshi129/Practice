#include <iostream>
using namespace std;

void merge(int arr[], int arr2[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            arr2[k] = arr[i];
            i++;
        }
        else
        {
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= r)
        {
            arr2[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
    }

    for (int m = 0; m <= r; m++)
    {
        arr[m] = arr2[m];
    }
}

void mergeSort(int arr[], int arr2[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, arr2, l, mid);
        mergeSort(arr, arr2, mid + 1, r);
        merge(arr, arr2, l, mid, r);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr2[n];
    cout << "Array Before Sorting : ";
    display(arr, n);
    cout << "Array After Sorting : ";
    mergeSort(arr, arr2, 0, n - 1);
    display(arr, n);
}