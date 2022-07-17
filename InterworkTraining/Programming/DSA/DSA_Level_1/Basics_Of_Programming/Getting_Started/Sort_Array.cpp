#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n=6,arr1[6]={9,3,6,2,5,4},sec_max=INT_MIN,first=arr1[0],temp=0;
    // cout<<"Enter No. of Elements in Array : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    cout<<"Array Before Sorting is : ";
    for(int k=0;k<n;k++){
        cout<<arr1[k]<<" ";
    }
    for(int i=0;i<n;i++){
        for(int x=i+1;x<n;x++){
        if(arr1[i]>arr1[x]){
            temp = arr1[i];
            arr1[i] = arr1[x];
            arr1[x] = temp;
        }
        }

    }
    cout<<"Array After Sorting : ";
    for(int j=0;j<n;j++){
        cout<<arr1[j]<<" ";
    }
    cout<<endl;
}