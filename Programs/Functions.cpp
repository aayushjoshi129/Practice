// Power of 2

#include <iostream>
using namespace std;

// int power() // Function to find the power
// {
//   int a, b, pow = 1;
//   cout << "Enter a : ";
//   cin >> a;
//   cout << "Enter b : ";
//   cin >> b;
//   for (int i = 1; i <= b; i++)
//   {
//     pow = pow * a;
//   }
//   return pow;
// }

// int EveOdd() // Function to Check Even or Odd
// {
//   int a;
//   cout << "Enter a : ";
//   cin >> a;
//   if (a % 2)
//   {
//     return 0;
//   }
//   else
//   {
//     return 1;
//   }
// }

int nCr() // nCr Program (Maths)
{
  int n, r, ncr, pro = 1, div = 1;
  cout << "Enter N : ";
  cin >> n;
  cout << "Enter R : ";
  cin >> r;
  for (int i = n, rn = r; i <= r, rn >= 1; i--, rn--)
  {
    pro = (pro * i);
    div = (div * rn);
  }
  ncr = pro / div;
  return ncr;
}

int nPr() // nCr Program (Maths)
{
  int n, r, npr, pro = 1, div = 1;
  cout << "Enter N : ";
  cin >> n;
  cout << "Enter R : ";
  cin >> r;
  for (int i = n; i >= 1; i--)
  {
    pro = (pro * i);
  }

  for (int rn = n - r; rn >= 1; rn--)
  {
    div = (div * rn);
  }
  npr = pro / div;
  cout << npr << endl;
  return npr;
}

int main()
{
  // int pow = power(); // Function to Find Power
  // cout << "Power is " << pow << endl;
  // int eveodd = EveOdd(); // Function to Check Even or Odd
  // if (eveodd)
  // {
  //   cout << "Number is Even" << endl;
  // }
  // else
  // {
  //   cout << "Number is Odd" << endl;
  // }

  int ncr = nCr();
  cout << "nCr is " << ncr << endl;

  int npr = nPr();
  cout << "nPr is " << npr << endl;
}