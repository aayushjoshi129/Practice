#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cout<<"enter X:";
    cin>>x;
    cout<<"enter Y:";
    cin>>y;
    if (x>y)
    {
        cout<<x<<" is greater than "<<y;
    }
    else if(y>x)
    {
        cout<<y<<" is greater than "<<x;
    }
    else
    {
        cout<<x<<" and "<<y<<" are equal";
    }
    return 0;
}
