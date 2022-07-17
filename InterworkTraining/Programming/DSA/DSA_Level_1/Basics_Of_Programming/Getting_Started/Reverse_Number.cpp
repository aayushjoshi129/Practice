#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem=0;
    cout<<"Enter N : ";
    cin>>n;
    int num = n;
    while(n!=0){
        rem = n%10;
        rev = (rev *10) + rem;
        n=n/10;
    }
    cout<<"Reverse form of "<<num<<" is "<<rev<<endl;
}