#include <iostream>
using namespace std;
int reverseArray(int arr[], int size)
{
  int temp, start = 0, end = size - 1;
  while (start <= end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }

  cout << "Reversed Array is ";
  for (int j = 0; j < size; j++)
  {
    cout << arr[j] << " ";
  }
}
int main()
{
  int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
  reverseArray(arr, 10);
}