#include <iostream>
using namespace std;
int swapAlternate(int arr[], int size)
{
  int temp, start = 0, end = 1;
  while (start<=size)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start+=2;
    end+=2;
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
  swapAlternate(arr, 10);
  cout<<endl;
  int arr2[11] = {1,2,3,4,5,6,7,8,9,10,11};
  swapAlternate(arr2,11);
}