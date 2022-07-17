// Rotate Number k times
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,k,nod=0;
    cout<<"Enter N : ";
    cin>>n;
    int num = n;
    while(num){
        num=num/10;
        nod++;
    }
    cout<<"Enter the times you want the number to rotate : ";
    cin>>k;
    int div=1,mul=1;
    k=k%nod;
    if(k<0){
        k=k+nod;
    }
    // for(int i=1;i<=nod;i++){
    //     if(i<=k){
    //         div = div * 10;
    //     }else{
    //         mul = mul * 10;
    //     }
    // }
    div = pow(10,k);
    mul = pow(10,(nod-k));
    int q = n/div;
    int r = n%div;
    int rot = r*mul + q;
    cout<<rot<<endl;
}