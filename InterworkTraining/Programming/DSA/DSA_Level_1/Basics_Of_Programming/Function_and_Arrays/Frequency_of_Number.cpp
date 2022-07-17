#include<iostream>
using namespace std;
int main(){
    int n , num;
    cout<<"Enter no : ";
    cin>>n;
    int number  = n;
    cout<<"Enter digit to find frequency : ";
    cin>>num;
    int count = 0;
    while(n){
        int rem = n%10;
        if(rem==num){
            count+=1;
        }
        n=n/10;
    }
    cout<<"Occurence of "<<num<<" in "<<number<<" is "<<count<<" times"<<endl;
}