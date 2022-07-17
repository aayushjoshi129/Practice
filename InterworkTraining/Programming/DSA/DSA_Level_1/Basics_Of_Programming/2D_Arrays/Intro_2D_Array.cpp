#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter No. of Rows in Matrix : ";
    cin>>m;
    cout<<"Enter No. of Columnss in Matrix : ";
    cin>>n;
    int martix[100][100];
    cout<<"Enter Elements in Matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>martix[i][j];
        }
    }
    cout<<endl<<"The Matrix look like this : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<martix[i][j]<<" ";
        }
        cout<<endl;
    }
}