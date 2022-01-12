#include <iostream>
using namespace std;
int swapAlternate(int arr[], int size)
{
  int temp, start = 0, end = 1;
  while (start+1<size)
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
  return 0;
}

// Swapping Using inbuilt function

// int swapping(int arr[],int n){
//   for(int i=0;i<n;i+=2){
//     if(i+1<n)
//     swap(arr[i],arr[i+1]);
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 1;
// }
int main()
{
  int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
  swapAlternate(arr, 10);
  // swapping(arr,10);
  cout<<endl;
  int arr2[11] = {1,2,3,4,5,6,7,8,9,10,13};
  swapAlternate(arr2,11);
  // swapping(arr2,11);
cout<<endl;
  int arr3[5] = {11,33,9,76,43};
  swapAlternate(arr3,5);
  // swapping(arr3,5);
}