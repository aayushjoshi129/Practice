#include <iostream>
using namespace std;
int main()
{
  int a, b;
  char op;
  cout << "Enter value of A : ";
  cin >> a;
  cout << "Enter value of B : ";
  cin >> b;
  cout << "Enter value of Operator : ";
  cin >> op;
  switch (op)
  {
  case '+':
    cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    break;
  case '-':
    cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
    break;
  case '*':
    cout << "Multiplication " << a << " and " << b << " is " << a * b << endl;
    break;
  case '/':
    cout << "Division " << a << " and " << b << " is " << (a / float(b)) << endl;
    break;
  case '%':
    cout << "Modulo " << a << " and " << b << " is " << a % b << endl;
    break;
  default:
    cout << "You Have Entered Wrong Value of Operator";
  }
  return 0;
}