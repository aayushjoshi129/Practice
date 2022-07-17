#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Bulbs : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<=(n/i)){       // If I write i*i<=n then It will exceeds the integer limit that ranges from 2^-31 to 2^32 -1 
        cout<<i*i<<" ";
        }
    }
    cout<<endl;
}