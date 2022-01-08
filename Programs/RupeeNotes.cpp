#include <iostream>
using namespace std;
int main()
{
  int n, hundred = 0, fifty = 0, twenty = 0, ten = 0, one = 0;
  cout << "Enter N : ";
  cin >> n;
  switch (1)
  {
  case 1:
    hundred = hundred + n / 100;
    n = n % 100;
    cout << "Hundred Rupee Notes---> " << hundred << endl;
  case 2:
    fifty = fifty + n / 50;
    n = n % 50;
    cout << "Fifty Rupee Notes ---> " << fifty << endl;
  case 3:
    twenty = twenty + n / 20;
    n = n % 20;
    cout << "Twenty Rupee Notes ---> " << twenty << endl;
  case 4:
    ten = ten + n / 10;
    n = n % 10;
    cout << "Ten Rupee Notes ---> " << ten << endl;
  case 5:
    one = one + n / 1;
    n = n % 1;
    cout << "One Rupee Notes ---> " << one << endl;
  }
  return 0;
}