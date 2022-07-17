
// Printing Swastik

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // first row
        for(int j=1;j<=n ;j++){
            if(i==1 && (j<=n/2+1 || j==n)){
                cout<<"*";
            }
            else if(i<=n/2 && (j==n/2+1 || j==n)){
                cout<<"*";
            }
            else if(i==n/2+1){
                cout<<"*";
            }
            else if(i>n/2+1 && (j==1 || j==n/2+1)){
                cout<<"*";
            }
            else if(i==n && (j==1 || j>=n/2+1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}






//              *	*	*		*	
//              		*		*	
//              *	*	*	*	*	
//              *		*			
//              *		*	*	*	
