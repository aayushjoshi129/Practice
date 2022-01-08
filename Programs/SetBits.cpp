#include <iostream>
using namespace std;

int SetBits(int a, int b){
  int count = 0;
  while(a!=0 & b!=0){
  if(a&1){
    count+=1;
  }
  if (b&1){
    count+=1;
  }
    a=a>>1 , b = b>>1;
  }
  return count;
} 

int main()
{
  int a,b;
  cout << "Enter a : ";
  cin >> a;
  cout << "Enter b : ";
  cin >> b;
  cout<< "No. of Set Bits are "<<SetBits(a,b);
}