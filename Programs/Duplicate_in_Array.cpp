#include <iostream>
using namespace std;

// Array containing all numbers from 1 to (n-1) and prints repeated  number
int Dup(int arr[],int n){
   int ans =0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
	return ans;
} 

int main()
{
  int n = 10;
  int arr[10] = {1, 1, 2, 3, 5, 5, 7, 7, 9, 9};
  int arr1[10] = {1,2,4,3,5,8,7,6,3,9};
  
  cout << "Duplicate Elements are : " << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      if (arr[i] == arr[j] && i != j)
      {
        cout << arr[i] << " ";
      }
    }
  }
  cout<<endl;
  cout<<Dup(arr1,10)<<endl;
}