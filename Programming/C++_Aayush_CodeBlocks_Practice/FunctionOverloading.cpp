#include<iostream>
using namespace std;
int calc(int);
int calc(int,int);
int main ()
{
    int s,a,b;
    cout<<"enter value of s ";
    cin>>s;
    cout<<"square of "<<s<<" is "<<calc(s);
    cout<<"\nenter value of a and b ";
    cin>>a>>b;
    cout<<"\nsum of two numbers is "<<calc(a,b);
    return 0;
}
int calc (int x)
{
    return (x*x);
}
int calc (int x,int y)
{
    return (x+y);
}
