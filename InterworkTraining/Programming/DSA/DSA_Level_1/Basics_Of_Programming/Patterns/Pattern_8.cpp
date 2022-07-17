#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j<n; j++)
        {
            cout <<" ";
        }
        for (int k = i; k <= i; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}

//                  				*	
//                  			*	
//                  		*	
//                  	*	
//                  *	