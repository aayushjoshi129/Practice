// place digit to value Inversing ex = 3142 is 2413

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,inv=0,op=1;
    cout<<"Enter N : ";
    cin>>n;
    int num = n;
    while(n!=0){
        int od = n%10;
        int id = op;
        int ip = od;
        inv = inv + id * pow(10,ip-1);
        n=n/10;
        op++;
    }
    cout<<"Inverse form of "<<num<<" is "<<inv<<endl;
}
