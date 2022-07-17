#include <iostream>
using namespace std;


int partition(int arr[],int l , int h){
    int pivot = arr[l];
    int i = l;
    int j = h;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
            int temp = arr[j];
            arr[j] = arr[l];
            arr[l] = temp;

    return j;
}


void quickSort(int arr[],int l , int h)
{
    if(l<h){
        int pivot = partition(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
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

    cout << "Array Before Sorting : ";
    display(arr, n);
    cout << "Array After Sorting : ";
    quickSort(arr, 0,n-1);
    display(arr, n);
}