#include <iostream>
using namespace std;
int main()
{
  int n[5] = {1, 2, 3, 4, 5};
  int arr[10];
  fill_n(arr, 10, 1); // fill_n(array,size,number)  method to fill all elements of array with custom values.
                      // cout<<sizeof(n)/sizeof(n[0])<<endl;
  for (int i = 0; i < 5; i++)
  {
    cout << n[i] << endl;
  }
}