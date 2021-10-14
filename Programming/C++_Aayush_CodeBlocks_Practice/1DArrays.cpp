#include<iostream>
using namespace std;
int main ()
{
    int i,sum=0,arr[5];
    for (i=0;i<5;i++)
    {
        cout<<"enter the element "<<i<< ": ";
        cin >> arr[i];
        sum=sum + arr[i];
    }
    cout<<"the sum of the array is "<<sum;
    return 0;
}
