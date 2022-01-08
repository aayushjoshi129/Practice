#include <iostream>
using namespace std;
int main()
{
  int a, b, pow = 1;
  cout << "Enter a : ";
  cin >> a;
  cout << "Enter a : ";
  cin >> b;
  for (int i = 1; i <= b; i++)
  {
    pow = pow * a;
  }
  cout<<pow<<endl;
}
