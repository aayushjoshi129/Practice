#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n - i + 1; k >= 1; k--)
        {
            cout << "*";
        }

        cout << endl;
    }
}

//                              *	*	*	*	*	
//                              	*	*	*	*	
//                              		*	*	*	
//                              			*	*	
//                              				*	
