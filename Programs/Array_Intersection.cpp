#include <iostream>
using namespace std;
int main()
{
  int n = 6;
  int arr1[6] = {1, 2, 3, 4, 5, 6};
  int arr2[6] = {2, 4, 6, 8, 10, 12};
  cout << "Intersection of Array is : " << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr1[i] == arr2[j])
      {
        cout << arr1[i] << " ";
      }
    }
  }
  cout << endl;
}