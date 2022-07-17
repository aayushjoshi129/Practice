#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter N : ";
    cin>>n;
    int num=n;
    while(n!=0){
        count++;
        n=n/10;
    }
    if(num!=0){
    cout<<"No. of Digit in "<<num<<" is "<<count<<endl;
    }
    else{
    cout<<"No. of Digit in "<<num<<" is 1"<<endl;
    }
}