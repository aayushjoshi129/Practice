#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int outerspaces = n / 2;
    int innerspaces = -1;
    int stars = 2;
    for (int i = 1; i <= n; i++)
    {
        // cout << outerspaces << "*" << innerspaces << endl;

        // Loop for outer spaces
        for (int j = 1; j <= outerspaces; j++)
        {
            cout << " ";
        }
        cout << "*";

        // Loop for Inner Spaces
        for (int j = 1; j <= innerspaces; j++)
        {
            cout << " ";
        }
        if (i != 1 && i != n)       // OR if(i>1 || i<n)
        {
            cout << "*";
        }

        if (i <= n / 2)
        {
            outerspaces -= 1;
            innerspaces += 2;
        }
        else
        {
            outerspaces += 1;
            innerspaces -= 2;
        }
        cout << endl;
    }
}


//                              		*	
//                              	*		*	
//                              *				*	
//                              	*		*	
//                              		*	
