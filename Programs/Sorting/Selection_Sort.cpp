// BUBBLE_SORT - It takes first element and compare it with next all elements and if it finds minimum of them then it swaps it with the first element and the cycle goeson till last element.

#include <iostream>
#include <algorithm>
using namespace std;

int selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minPos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] <= arr[minPos])
            {
                minPos = j;
            }
        }
        // if (arr[i] > arr[minPos]){
        //     int tmp= arr[i];
        //     arr[i]=arr[minPos];
        //     arr[minPos]=tmp;
        // }
        swap(arr[minPos], arr[i]);
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
    selectionSort(arr, n);
}