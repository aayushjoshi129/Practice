#include <iostream>
using namespace std;
int main()
{

  int a = 2;
  char b = 'c';
  bool c = true;
  float d = 3.14;
  double e = 1.11;
  int f = 'f'; // TypeCasting of char to integer
  char ch = 102;
  unsigned int g = 221;     // it will store only positive number
  unsigned int h = -221;    // it will show an large number having binary code of 221 as it is unsigned number

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;  // ASCII value of f
  cout << ch << endl; // ASCII value 102 represents f
  cout << g << endl;
  cout << h << endl;
  cout << "Size of a is : " << sizeof(a) << endl;

  return 0;
}