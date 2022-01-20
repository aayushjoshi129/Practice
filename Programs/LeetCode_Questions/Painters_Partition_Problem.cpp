#include <iostream>
using namespace std;

bool PossibleSolution(int arr[], int size, int painters, int mid)
{
  int PaintersCount = 1;
  int timeSum = 0;
  for (int i = 0; i < size; i++)
  {
    if (timeSum + arr[i] <= mid)
    {
      timeSum += arr[i];
    }
    else
    {
      PaintersCount++;
      if (PaintersCount > painters || arr[i] > mid)
      {
        return false;
      }
      else
      {
        timeSum = arr[i];
      }
    }
  }
  return true;
}

int timeAllocated(int arr[], int size, int painters)
{
  int s = 0;
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  int e = sum;
  int ans = -1;
  int mid = s + (e - s) / 2;
  while (s <= e)
  {

    if (PossibleSolution(arr, size, painters, mid))
    {
      ans = mid;
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }

  return ans;
}

int main()
{
  int arr[100], size, painters;
  cout << "Enter Size of Array : ";
  cin >> size;
  cout << "Enter Elements of Array : " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter No. of Painters : ";
  cin >> painters;

  int time = timeAllocated(arr, size, painters);
  cout << "Maximum Time is " << time << endl;
}