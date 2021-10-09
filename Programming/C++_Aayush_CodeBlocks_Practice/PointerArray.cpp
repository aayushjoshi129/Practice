#include<iostream>
using namespace std;
int main ()
{
    int arr[5]={10,20,30,40,50};
    int *p,i,sum=0;
    p=arr;
    cout<<"\nelements are \n";
    for (i=0;i<5;i++)
    {
        cout<<"\n"<<*p<<"\n";
        sum=sum+*p;
        p++;
    }
    cout<<"\nsum is "<<sum;
    return 0;
}
