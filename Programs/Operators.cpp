#include <iostream>
using namespace std;
int main()
{
  int a = 2 / 5;    // int/int is always integer
  float b = 2.4 / 5;    // float/int is float value
  int c = 2 + 5;    // double/int is double value
  int d = 5 - 2;
  int e = 2 * 5;
  int f = 2 / 5;
  bool g = (5 == 5);
  int h = 2 / 5;
  int i = 2 / 5;

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;
  cout << g << endl;
  cout << h << endl;
  cout << i << endl;

  return 0;
}