#include <iostream>
using namespace std;

int reverse(int x)
  {
  int rem, rev = 0;
    while (x != 0)
    {
      rem = x % 10;
      if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
      {
        return 0;
      }
      rev = (rev * 10) + rem;
      x = x / 10;
    }
    return rev;
  }

int main()
{
  int n;
  cout << "Enter N : ";
  cin >> n;
  cout<<reverse(n)<<endl;  

}