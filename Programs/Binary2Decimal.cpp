#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n,dec=0,num,rem,i=0,ans=0;
  cout<<"Enter N in Binary Format : ";
  cin>>n;
  num=n;
  // while(n){
  //   rem=n%10;
  //   dec = (pow(2,i)*rem) + dec;
  //   i=i+1;
  //   n=n/10;
  // }

  // Another Way to Binary 2 Decimal

  while(n){
  int bit = n&1;
  if(bit){
    ans = ans + pow(2,i);
  }
    n=n/10;
    i++;
  }

  // cout<<"The Decimal Representation of "<<num<<" is "<<dec<<endl;
  cout<<"The Decimal Representation of "<<num<<" is "<<ans<<endl;
}