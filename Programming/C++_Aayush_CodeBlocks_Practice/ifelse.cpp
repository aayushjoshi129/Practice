#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"enter the no. to check whether the number is odd or even :";
    cin>>a;
    if (a%2==0)
    {
        cout<<"the "<<a <<" is even";
    }
    else
        {
        cout<<"the " << a << " is odd";
    }
    return 0;
}
