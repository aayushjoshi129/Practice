#include<iostream>
using namespace std;
int main(){
    int low,high;
    cout<<"Enter Lower Limit : ";
    cin>>low;
    cout<<"Enter Higher Limit : ";
    cin>>high;
    for(int i=low;i<=high;i++){
        int count=0;
    for(int j=1;j<=i;j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==2){
        cout<<i<<" is a Prime Number"<<endl;
    }
    else{
        cout<<i<<" is not a Prime Number"<<endl;
    }
    }
    return 0;
}