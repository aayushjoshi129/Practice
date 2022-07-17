#include <iostream>
using namespace std;

int main()
{
    int n1,n2, a1[100] , a2[100];
    cout<<"Enter Size of First Array : ";
    cin >> n1;
    cout<<"Enter Elements of First Array : "<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }
    cout<<"Enter Size of Second Array : ";
    cin >> n2;
    cout<<"Enter Elements of Second Array : "<<endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    // int a1[5] = {3, 1, 0, 7, 5};
    // int n1 = 5;
    // int a2[6] = {1, 1, 1, 1, 1, 1};
    // int n2 = 6;
    int k = n1 > n2 ? n1 : n2;
    int sum[k]={};
    int c = 0;
    int i = n1 - 1;
    int j = n2 - 1;
    while (k >= 0)
    {
        int d = c;
        if (i >= 0)
        {
            d += a1[n1];
        }
        if (j >= 0)
        {
            d += a2[j];
        }
        c = d / 10;
        d = d % 10;
        sum[k] = d;
        i--;
        j--;
        k--;
    }
    if (c != 0)
    {
        cout << c << endl;
    }
    for (int i = 0; i < k; i++)
    {
        cout << sum[i] << endl;
    }

    return 0;
}