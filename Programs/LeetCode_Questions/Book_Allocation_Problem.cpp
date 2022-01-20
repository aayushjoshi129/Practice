#include <iostream>
using namespace std;

bool isPossbleSolution(int arr[], int size, int students, int mid)
{
  int studentsCount = 1;
  int pageSum = 0;
  for (int i = 0; i < size; i++)
  {
    if (pageSum + arr[i] <= mid)
    {
      pageSum += arr[i];
    }
    else
    {
      studentsCount++;
      if (studentsCount > students || arr[i] > mid)
      {
        return false;
      }
      else
      {
        pageSum = arr[i];
      }
    }
  }
  return true;
}

int BookAllocated(int arr[], int size, int students)
{
  int s = 0;
  int sum = 0;
  int ans = -1;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
  int e = sum;
  int mid = s + (e - s) / 2;
  while (s <= e)
  {
    if (isPossbleSolution(arr, size, students, mid))
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
  int arr[100], size, students;
  cout << "Enter the Size of Array : ";
  cin >> size;
  cout << "Enter Elements : " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter No. of Students : ";
  cin >> students;

  cout << BookAllocated(arr, size, students) << endl;

  return 0;
}