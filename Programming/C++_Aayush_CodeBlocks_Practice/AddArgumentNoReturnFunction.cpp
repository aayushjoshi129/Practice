#include<iostream>
using namespace std;
void add(int,int);
int main ()
{
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    add(a,b);
    return 0;
}
void add(int x , int y)
{
    int c;
    c=x+y;
    cout<<"the sum of two numbers is "<<c;
}
