#include<iostream>
using namespace std;
void add(int,int);
int main()
{
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;
     cout<<"\nEnter the number : ";
    cin>>b;
    add(a,b);
    return 0;
}
void add (int x,int y)
{
    int c;
    c=x+y;
    cout<<"\nthe sum of two numbers is : "<<c;
}
