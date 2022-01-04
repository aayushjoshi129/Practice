// Given an Integer , return the difference between the product of its digits and the sum of its digits.

#include<iostream>
using namespace std;
int main(){
  int n,pro=1,sum=0;
  cout<<"Enter N : ";
  cin>>n;

  while(n>0){
    int z = n%10;
    pro=pro*z;
    sum=sum+z;
    n=n/10;
  }

  cout<<"Difference b/w product "<<pro<<" and sum "<<sum<<" is "<<(pro-sum)<<endl;

}