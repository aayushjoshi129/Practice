#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
  int start = 0, end = n - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end)
  {
    if (key == arr[mid])
    {
      ans = mid;
      end = mid - 1;        // If we have found first occurence then we should check at RHS
    }
    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    else if (key < arr[mid])
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int lastOccurence(int arr[], int n, int key)
{
  int start = 0, end = n - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end)
  {
    if (key == arr[mid])
    {
      ans = mid;
      start = mid + 1;        // If we have found first occurence then we should check at LHS
    }
    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    else if (key < arr[mid])
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
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

  int Firstindex = firstOccurence(arr, size, key);
  int Lastindex = lastOccurence(arr, size, key);
  cout <<"First Occurence of "<< key <<" is at Index "<< Firstindex << endl;
  cout <<"Last Occurence of "<< key <<" is at Index "<< Lastindex << endl;
}