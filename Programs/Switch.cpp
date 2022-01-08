#include <iostream>
using namespace std;
int main()
{
  int n;
  char ch = 'a';
  cout << "Enter N : ";
  cin >> n;
  switch (n)
  {
  case 1:
    cout << "I am Case 1" << endl;
    break;
  case 2:
    cout << "I am Case 2" << endl;
    break;
  case 3:
    switch (ch)
    {
    case 'a':
      cout << "The Value of ch is " << ch << endl;
      break;
    }
    cout << "I am Case 3" << endl;
    break;
  case 4:
    cout << "I am Case 4" << endl;
    break;

  default:
    cout << "I am Default Case" << endl;
    break;
  }
  return 0;
}