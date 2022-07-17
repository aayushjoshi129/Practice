#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int spaces = n / 2, stars = 1, num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        int cnum = num;
        for (int k = 1; k <= stars; k++)
        {
            cout << cnum << "";
            if (k <= stars / 2)
            {
                cnum++;
            }
            else
            {
                cnum--;
            }
        }
        if (i <= n / 2)
        {
            spaces -= 1;
            stars += 2;
            num += 1;
        }
        else
        {
            spaces += 1;
            stars -= 2;
            num -= 1;
        }
        cout << endl;
    }

    cout << endl;
}


//                                         		1	
//                                         	2	3	2	
//                                         3	4	5	4	3	
//                                         	2	3	2	
//                                         		1	
