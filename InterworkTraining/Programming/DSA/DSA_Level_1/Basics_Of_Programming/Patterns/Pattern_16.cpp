#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int val = 1;
    int spaces = 2*n - 3;
    for (int i = 1; i <= n; i++)
    {
        // For Left Values
        for (int j = 1; j <= val; j++)
        {
            cout << j;
        }

        // For Spaces
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }

        if(i==n){
            val--;
        }
        // For Right Values
        for (int l = val; l >= 1; l--)
        {
            cout << l;
        }
        val+=1;
        spaces-=2;
        cout << endl;
    }
}

//                                      1								1	
//                                      1	2						2	1	
//                                      1	2	3				3	2	1	
//                                      1	2	3	4		4	3	2	1	
//                                      1	2	3	4	5	4	3	2	1	
