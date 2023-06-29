// INSERTION_SORT - Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

#include <iostream>
#include <algorithm>
using namespace std;

int insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int tmp = arr[i];
        int j = i - 1;

        // while (j >= 0 && arr[j] > tmp) {
        //     arr[j + 1] = arr[j];
        //     j = j - 1;
        // }
        
        for (; j >= 0; j--)
        {
            if (arr[j] > tmp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=tmp;
    }

    // printing elements
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
    insertionSort(arr, n);
}