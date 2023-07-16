#include <iostream>
#include<algorithm>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int j = n - 1, i = 0;
    while (j >= 0 && i < m)
    {
        if (arr1[j] > arr2[i])
        {
            swap(arr1[j], arr2[i]);
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    int n, m;
    long long int arr1[100];
    long long int arr2[100];
    cout << "Enter No. of elements in First Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element in the First Array in Non-Decreasing Order: ";
        cin >> arr1[i];
    }

    cout << "Enter No. of elements in Second Array: ";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cout << "Enter " << i + 1 << " Element in the Second Array in Non-Decreasing Order: ";
        cin >> arr1[i];
    }

    merge(arr1, arr2, n, m);

    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << arr1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    return 0;
}