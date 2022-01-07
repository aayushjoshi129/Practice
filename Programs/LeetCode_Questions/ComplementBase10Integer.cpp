// Complement of Base 10 Integer

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter N : ";
  cin>>n;
        int m = n;
        int mask=0;
        if(n==0)
            cout<<1<<endl;
        while(m!=0){
            mask = (mask << 1) | 1;       // Left Shift and Or with 1 for Mask
            m = m>>1;                     // Right Shift m
        }
        int ans = (~n) & mask;            // And Operation in negation of n and mask
        cout<<ans<<endl;
}
