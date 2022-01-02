#include <iostream>
using namespace std;
int main()
{
  int a, b, n, x=2, y=x+1;

  cout << "Enter A :";
  cin >> a;
  cout << "Enter B :";
  cin >> b;

  if (a > b)
  {
    cout << "A is greater than B" << endl;
  }
  else if (b > a)
  {
    cout << "B is greater than A" << endl;
  }
  else
  {
    cout << "Both A and B are Equal" << endl;
  }

  cout << "Enter N :";
  cin >> n;

  if (n > 0)
  {
    cout << "Number is Positive" << endl;
  }
  else if (n < 0)
  {
    cout << "Number is Negative" << endl;
  }
  else
  {
    cout << "Number is 0" << endl;
  }

if ((x=3)==y){
  cout << x << " I am X" << endl;
}
else{
  cout << x+1 << " I am X+1" << endl;
}

}