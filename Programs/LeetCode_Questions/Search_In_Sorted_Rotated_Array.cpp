#include <iostream>
using namespace std;
int Pivot(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  while (s < e)
  {
    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}

int BinarySearch(int arr[], int start, int n, int key)
{
  int s = start;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  while (s <= e)
  {
    if (key == arr[mid])
    {
      return mid;
    }
    else if (key > arr[mid])
    {
      s = mid + 1;
    }
    else if (key < arr[mid])
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main()
{
  int size, arr[100], key;
  cout << "Enter Size of the Array : ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cout << "Enter " << i + 1 << " Element in Array : ";
    cin >> arr[i];
  }
  cout << "Enter Key to Search in Array : ";
  cin >> key;
  int pivot = Pivot(arr, size);
  cout << pivot << endl;
  int index;
  if (key >= arr[pivot] && key <= arr[size - 1])
  {
    index = BinarySearch(arr, pivot, size, key);
  }
  else
  {
    index = BinarySearch(arr, 0, pivot, key);
  }

  cout << index << endl;
}