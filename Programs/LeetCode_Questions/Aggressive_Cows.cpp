#include <iostream>
#include <algorithm>
using namespace std;

bool PossibleSolution(int arr[], int size, int cows, int mid)
{
  int CowsCount = 1;
  int lastPos = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] - lastPos >= mid)
    {
      lastPos = arr[i];
      CowsCount++;
      if (CowsCount == cows)
      {
        return true;
      }
    }
  }
  return false;
}

int timeAllocated(int arr[], int size, int cows)
{
  int s = 0;
  int maxi = -1;
  for (int i = 0; i < size; i++)
  {
    maxi = max(maxi, arr[i]);
  }
  int e = maxi;
  int ans = -1;
  int mid = s + (e - s) / 2;
  while (s <= e)
  {

    if (PossibleSolution(arr, size, cows, mid))
    {
      ans = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }

  return ans;
}

int main()
{
  int arr[100], size, cows;
  cout << "Enter Size of Stalls : ";
  cin >> size;
  cout << "Enter Stall Numbers : " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter No. of Cows : ";
  cin >> cows;
  sort(arr, arr + size);

  int time = timeAllocated(arr, size, cows);
  cout << "Largest Minimum Distance is " << time << endl;
}