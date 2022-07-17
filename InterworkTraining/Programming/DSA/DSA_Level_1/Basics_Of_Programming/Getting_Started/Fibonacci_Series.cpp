#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,fib=a+b;
    cout<<"Enter N : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        fib = a + b;
        cout<<fib<<" ";
        a=b;
        b=fib;
    }
}
