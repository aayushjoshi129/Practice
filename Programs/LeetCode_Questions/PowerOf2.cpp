// Power of 2

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n, isPower = false, ans = 1;
  cout << "Enter N : ";
  cin >> n;
  for (int i = 0; i < 31; i++)
  {
    if (ans == n)
    {
      isPower = true;
    }

    if (ans < INT_MAX / 2)
    {
      ans = ans * 2; // It can be if(pow(2,i)==n)
    }
  }
  if (isPower)
  {
    cout << "True" << endl;
  }
  else
  {
    cout << "False" << endl;
  }
}
