#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n,num,rem,i=0,same=0,rev=0;
    cout<<"Enter N : ";
    cin>>n;
    num=n;
  while(n!=0){
    rem = n%10;
    same = same + (pow(10,i)*rem);
    rev = rev*10 + rem;
    i=i+1;
    n=n/10;
  }
  cout<<"The Reverse of "<<num<<" is "<<rev<<endl;
  cout<<"The Same of "<<num<<" is "<<same<<endl;
}