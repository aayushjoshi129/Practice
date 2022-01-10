#include <iostream>
#include<algorithm>
using namespace std;
int Max(int arr[], int size)
{
  // int max = arr[0];
  int maxi = INT_MIN;
  // OR int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    maxi = std::max(maxi, arr[i]);
    // if (arr[i] > max)
    // {
    //   max = arr[i];
    // }
  }
  return maxi;
}
int Min(int arr[], int size)
{
  // int min = arr[0];
  int mini = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    mini = std::min(mini, arr[i]);
    // if (arr[i] < min)
    // {

    //   min = arr[i];
    // }
  }
  return mini;
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
  cout << "Max Elem in Array is " << Max(arr, 4) << endl;
  cout << "Min Elem in Array is " << Min(arr, 4) << endl;
}