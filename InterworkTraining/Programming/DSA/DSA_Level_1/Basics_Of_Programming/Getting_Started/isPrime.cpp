#include<iostream>
using namespace std;
int isPrime(int n){
    bool Prime=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            Prime = 1;
        }
    }
    return Prime;
}
int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    int prime = isPrime(n);
    if(prime){
        cout<<"Number is Not Prime"<<endl;
    }
    else{
        cout<<"Number is Prime"<<endl;
    }
}

// #include <iostream>
// using namespace std;
// int main(){
//     int t,n;
//     cin >> t;
//     for (int j=1;j<=t ; j++){
//     cin>>n;
//         int count=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }

// if(count==2){
//             cout<<"prime"<<endl;
// }
// else{
//             cout<<"not prime"<<endl;
// }
// }
// }