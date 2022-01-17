// # Time Complexity of Binary Search is O(log(n))

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;    // Mid can also be calculated as mid = (start + (end-start))/2    --> It will prevent from overflow errors
  while (start <= end)
  {
    // Matches Value
    if (key == arr[mid])
    {
      return mid;
    }
    // Going Right Side
    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    // Going Left Side
    else if (key < arr[mid])
    {
      end = mid - 1;
    }
    mid = (start + end) / 2;
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

  int index = BinarySearch(arr, size, key);

  if (index==-1)
  {
    cout << "Element is not Present" << endl;
  }
  else
  {
    cout << "Element is Present at Index " << index;
  }

  return 0;
}