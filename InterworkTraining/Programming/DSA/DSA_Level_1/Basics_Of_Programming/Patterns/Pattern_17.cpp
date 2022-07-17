#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int spaces = n / 2;
    int stars = 1;
    for (int i = 1; i <= n; i++)
    {
        // Left Spaces
        for (int k = 1; k <= spaces; k++)
        {
            if (i == spaces+1)
            {
                cout << "*";
            }else{
            cout << " ";
            }
        }

        // Printing Stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        if (i <= n / 2)
        {
            stars += 1;
        }
        else
        {
            stars -= 1;
        }
        cout << endl;
    }
}

//                                        		*	
//                                        		*	*	
//                                        *	*	*	*	*	
//                                        		*	*	
//                                        		*	