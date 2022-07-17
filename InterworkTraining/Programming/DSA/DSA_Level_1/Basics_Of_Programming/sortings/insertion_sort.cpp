#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
  for(int i=1 ; i<n; i++){
      int temp = arr[i];
      int j = i-1;
      while (j>=0 && arr[j]>temp)
      {
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = temp;
      
      
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
    insertionSort(arr, n);
    display(arr, n);
}