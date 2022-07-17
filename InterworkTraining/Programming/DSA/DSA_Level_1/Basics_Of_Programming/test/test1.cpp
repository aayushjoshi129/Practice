#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n,num,bit,answer=0,i=0 ;
  cout<<"Enter N : ";
  cin>>n;
  num = n;
  while(num!=0){
    bit=num&1;
    answer = (bit * pow(10,i)) + answer;
    num = num>>1;
    i++;
  }
  cout<<"Binary Representation of "<<n<<" is "<<answer;
}