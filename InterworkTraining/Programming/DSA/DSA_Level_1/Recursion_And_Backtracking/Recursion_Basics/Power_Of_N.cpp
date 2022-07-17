#include<iostream>
using namespace std;
int count = 0;
int Power(int n,int base){
    if(n==1){
        count=1;
    }
    if(n<=0 || n%base!=0){
        count=0;
    }
    else{
        Power(n/base,base);
        count+=1;
    }
    return count;
}

int main(){
    int n , base;
    cin>>n>>base;
    int num = Power(n,base);
    cout<<num<<endl;

}