// # Time Complexity of Binary Search is O(log(n))

#include <iostream>
using namespace std;

int BinarySearch(int key)
{
  int start = 0;
  int end = key;
  int mid = (start + end) / 2; // Mid can also be calculated as mid = (start + (end-start))/2    --> It will prevent from overflow errors
  int ans = -1;
  while (start <= end)
  {
    int square = mid * mid;
    // Matches Value
    if (key == square)
    {
      return mid;
    }
    // Going Right Side
    else if (key > square)
    {
      ans = mid;
      start = mid + 1;
    }
    // Going Left Side
    else if (key < square)
    {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }

  return mid;
}

double precision(int n, int precision, int tempSol)
{
  double ans=tempSol;
  double factor = 1;
  for (int i = 0; i < precision; i++)
  {
    factor /= 10;
    for (double j = ans; j * j < n; j = j + factor)
    {
      ans = j;
    }
  }
  return ans;
}

int main()
{
  int key;
  cout << "Enter Key to find sqrt : ";
  cin >> key;

  int num = BinarySearch(key);

  cout<<precision(key,3,num);
  // cout << num << endl;

  return 0;
}