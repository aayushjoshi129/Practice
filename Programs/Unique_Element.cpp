#include <iostream>
using namespace std;

// Another Way to find Unique Elements
int Unique_Count(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if(arr[i]^arr[i+1]){
      cout<<arr[i]<<" ";
    }
  }
  return 1;
}


// Find Elements with count = 1;
int Unique_1(int arr[], int n)
{
  int ans = 0 ;
  for (int i = 0; i < n; i++)
  {
    ans = ans^arr[i];
    }
  return ans;
}

int main()
{
  int n = 10;
  int arr[10] = {1, 1, 2, 3, 5, 5,6,6,6,6};
  int arr2[5] = {1,3,5,3,5};
  for (int i = 0; i < n; i++)
  {
    int j;
    for (j = 0; j < i; j++)
    {
      if (arr[i] == arr[j])
      {
        break;
      }
    }
    if (i == j)
    {
      cout << arr[i] << " ";
    }
  }
  cout<<endl;
  Unique_Count(arr,10);
  cout<<endl;
  cout<<Unique_1(arr2,5)<<endl;
}

// cout<<"Unique Elements in Array is : "<<endl;
// for(int i=0;i<n;i++){
//   cout<<arr1[i]<<" ";
// }
//   cout << endl;
// }