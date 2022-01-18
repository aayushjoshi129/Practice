// Done Using Binary Search O(log(n))

#include <iostream>
using namespace std;

int peakIndex(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    if (arr[mid] < arr[mid + 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return arr[mid];
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
  // int arr1[4] = {3, 4, 5, 1};

  int peak = peakIndex(arr, size);
  cout << "Peak Element is " << peak << endl;
}