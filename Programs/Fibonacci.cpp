#include <iostream>
using namespace std;

int Fib(int n){
  int a = 0 , b = 1 , fib = a+b;
  for(int i=3;i<=n;i++){
    fib = a + b;
    a = b;
    b = fib;
  }
  if(n==1){
    return 0;
  }
  return fib;
}

int main()
{
  int n;
  cout << "Enter N : ";
  cin >> n;
  cout<<n<<" Term of Fibonacci Series is "<<Fib(n);
}