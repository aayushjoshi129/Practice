// # Time Complexity of Binary Search is O(log(n))

#include <iostream>
using namespace std;

long long int BinarySearch(long long int key)
{
  long long int start = 0;
  long long int end = key;
  long long int mid = (start + end) / 2; // Mid can also be calculated as mid = (start + (end-start))/2    --> It will prevent from overflow errors
  long long int ans = -1;
  while (start <= end)
  {
    long long int square = mid*mid;
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

int main()
{
  long long int key;
  cout << "Enter Key to find sqrt : ";
  cin >> key;

  long long int num = BinarySearch(key);

  cout << num << endl;

  return 0;
}