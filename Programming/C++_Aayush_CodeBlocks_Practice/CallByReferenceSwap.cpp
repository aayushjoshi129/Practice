#include<iostream>
using namespace std;
void swapp(int &,int &);
int main ()
{
    int a,b;
    cout<<"\nenter value of A and B ";
    cin>>a>>b;
    cout<<"\nbefore swapping ";
    cout<<"\nA="<<a<<"\nB="<<b;
    swapp (a,b);
    cout<<"\nafter swapping ";
    cout<<"\nA :"<<a<<"\nB :"<<b;
    return 0;
}
void swapp(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
