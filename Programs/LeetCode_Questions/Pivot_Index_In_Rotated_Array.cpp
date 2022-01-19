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
  int arr1[4] = {3, 4, 5, 1};
  int arr2[5] = {7, 9, 1, 2, 3};

  int pivot = Pivot(arr1, 4);
  int pivot2 = Pivot(arr2, 5);
  int pivot3 = Pivot(arr, size);
  cout << "Pivot Index is " << pivot << endl;
  cout << "Pivot Index is " << pivot2 << endl;
  cout << "Pivot Index is " << pivot3 << endl;
}