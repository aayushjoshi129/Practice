#include <iostream>
using namespace std;

int pivotIndex(int arr[], int n)
{
  int sum = 0;
  int lsum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  int rsum = sum;
  for (int j = 0; j < n; j++)
  {
    rsum = rsum - arr[j];
    if (lsum == rsum)
    {
      return j;
    }
    lsum = lsum + arr[j];
  }
  return -1;
}

int main()
{
  int size, arr[100];
  cout << "Enter Size of the Array : ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cout << "Enter " << i + 1 << " Element in Array : ";
    cin >> arr[i];
  }
  // int arr1[6] = {1, 7, 3, 6, 5, 6};
  // int arr2[3] = {1, 2, 3};

  int pivot = pivotIndex(arr, size);
  // int pivot = pivotIndex(arr1, 6);
  // int pivot = pivotIndex(arr2, 3);

  cout << "Pivot Element is at Index " << pivot << endl;
}