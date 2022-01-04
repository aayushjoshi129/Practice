// Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming Weight).

#include<iostream>
using namespace std;
int main(){
  int n,count=0;
  cout<<"Enter N : ";
  cin>>n;
  while(n!=0){

    //checking last bit

    if(n&1==1){
      count+=1;
    }
    n=n>>1;
  }

  cout<<count<<endl;
}