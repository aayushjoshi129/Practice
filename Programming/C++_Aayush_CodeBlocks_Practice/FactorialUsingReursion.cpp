#include<iostream>
using namespace std;
long factorial(int);
int main ()
{
    int a;
    cout<<"enter value of A :";
    cin>>a;
    factorial (a);
    cout<<"factorial of "<<a<<" is "<<factorial(a);
    return 0;
}
 long factorial (int n)
 {
     if (n==0)
     {
         return 1;
     }
     return (n*factorial(n-1));
 }
