#include <iostream>
using namespace std;

int main()
{
    // int n1,n2, arr1[100] , arr2[100];
    // cout<<"Enter Size of First Array : ";
    // cin >> n1;
    // cout<<"Enter Elements of First Array : "<<endl;
    // for (int i = 0; i < n1; i++)
    // {
    //     cin >> arr1[i];
    // }
    // cout<<"Enter Size of Second Array : ";
    // cin >> n2;
    // cout<<"Enter Elements of Second Array : "<<endl;
    // for (int i = 0; i < n2; i++)
    // {
    //     cin >> arr2[i];
    // }

    int arr1[5] = {3, 1, 0, 7, 5};
    int n1 = 5;
    int arr2[6] = {1, 1, 1, 1, 1, 1};
    int n2 = 6;
    if (n2 > n1)
    {
            cout << arr2[0]<<endl;
        for (int i = 1; i < n2; i++)
        {
            cout << arr1[i-1] + arr2[i]<< endl;
        }
    }
    else if (n1 > n2)
    {
           cout << arr1[0]<<endl;
        for (int i = 1; i < n1; i++)
        {
            cout << arr1[i] + arr2[i-1] << endl;
        }
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            cout << arr1[i] + arr2[i] << endl;
        }
    }

    return 0;
}