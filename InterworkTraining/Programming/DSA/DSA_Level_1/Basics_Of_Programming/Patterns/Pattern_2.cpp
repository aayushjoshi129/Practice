#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=n-i+1;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}


//                              *	*	*	*	*	
//                              *	*	*	*	
//                              *	*	*	
//                              *	*	
//                              *	
