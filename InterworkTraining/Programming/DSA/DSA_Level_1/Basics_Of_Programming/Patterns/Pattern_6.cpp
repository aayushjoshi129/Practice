#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    int stars = ((n/2)+1), spaces = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int l=1;l<=stars;l++){
            cout<<"*";
        }
        if(i<=(n/2)){
            stars-=1;
            spaces+=2;
        }
        else{
            stars+=1;
            spaces-=2;
        }
        cout<<endl;
    }
}


//                      *	*	*		*	*	*	
//                      *	*				*	*	
//                      *						*	
//                      *	*				*	*	
//                      *	*	*		*	*	*	
