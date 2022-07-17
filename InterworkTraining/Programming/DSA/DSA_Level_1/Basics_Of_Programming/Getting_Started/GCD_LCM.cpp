// Find HCF(GCD) and LCM 

#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter n1 : ";
    cin>>n1;
    int num1 = n1;
    cout<<"Enter n2 : ";
    cin>>n2;
    int num2 = n2;
    while(n1%n2!=0){
       int rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    int gcd = n2;
    int lcm = (num1*num2)/gcd;
    cout<<"GCD is "<<gcd<<endl;
    cout<<"LCM is "<<lcm<<endl;
}