#include <iostream>
using namespace std;

int ArithmeticProgression(int n){
  int term = (3 * n) + 7;
  return term;
} 

int main()
{
  int n;
  cout << "Enter N : ";
  cin >> n;
  cout <<n<< " term is "<<ArithmeticProgression(n);
}