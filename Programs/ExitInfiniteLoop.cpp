#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter N : ";
  cin >> n;
  while (1)
  {
    switch (n)
    {
    case 1:
      cout << "1st Case" << endl;
      break;
    case 2:
      cout << "2nd Case" << endl;
      break;
    case 3:
      cout << "3rd Case" << endl;
      break;
    }
    exit(0);                          // This will let you exit from the Infinite Loop
  }
}