#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int spaces = 0;
    int stars = n;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int k=1;k<=stars;k++){
            if(i>1 && i<=n/2 && k>1 && k<stars){
                cout<<" ";
            }
            else{
            cout<<"*";
            }
        }
        if(i<=n/2){
            spaces+=1;
            stars-=2;
        }else{
            spaces-=1;
            stars+=2;
        }
        cout<<endl;
    }
}



//                                                        *	*	*	*	*	*	*	
//                                                        	*				*	
//                                                        		*		*	
//                                                        			*	
//                                                        		*	*	*	
//                                                        	*	*	*	*	*	
//                                                        *	*	*	*	*	*	*	
