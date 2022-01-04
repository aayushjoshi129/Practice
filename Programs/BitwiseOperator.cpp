#include<iostream>
using namespace std;
int main(){
  int a=4,b=6;

  // Relationsl Operators

  cout<<"a&b(AND) : "<<(a&b)<<endl;     // o/p will be 4(100)
  cout<<"a|b(OR) : "<<(a|b)<<endl;      // o/p will be 6(110)
  cout<<"~a(NOT) : "<<(~a)<<endl;       // o/p will be -5(0000....100  --> not then 2's complement )
  cout<<"~b(NOT) : "<<(~b)<<endl;       // o/p will be -7(0000....110  --> not then 2's complement )
  cout<<"a^b(XOR) : "<<(a^b)<<endl;     // o/p will be 2(010)

  // Shift Operators

  cout<<"17>>1(Right Shift) : "<<(17>>1)<<endl;     // o/p will be 8(1000)
  cout<<"17>>2(Right Shift * 2) : "<<(17>>2)<<endl;     // o/p will be 4(100)
  cout<<"19<<1(Left Shift) : "<<(19<<1)<<endl;     // o/p will be 38(100110)
  cout<<"21<<2(Left Shift * 2) : "<<(21<<2)<<endl;     // o/p will be 84(1010100)

  // Increment & Decrement Operators

  int i = 7;
  cout<<++i<<endl;    // o/p will be 8 (i becomes 8 due to pre-increment)
  cout<<i++<<endl;    // o/p will be 8 (i becomes 8 due to post-increment and increment i to 9)
  cout<<i--<<endl;    // o/p will be 9 (i becomes 9 due to post-increment and then i=8)
  cout<<--i<<endl;    // o/p will be 7 (i becomes 7 due to pre-decrement)

}