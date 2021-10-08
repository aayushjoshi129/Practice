#include<iostream>
using namespace std;
void swapp(int *, int *);
int main ()
{
    int a,b;
    cout<<"enter value of A ";
    cin>>a;
    cout<<"\n enter value of B ";
    cin>>b;
    cout<<"\nvalues of a and b before swapping ";
    cout<<"\nA="<<a;
    cout<<"\nB="<<b;
    swapp(&a,&b);
    cout<<"\nafter swapping : ";
    cout<<"\nA="<<a;
    cout<<"\nB="<<b;
    return 0;
}
void swapp(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
