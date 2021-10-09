#include<iostream>
using namespace std;
int main ()
{
    int a=100;
    int &ref=a;
    cout<<"value of A is "<<a;
    cout<<"\nvalue of Ref is "<<ref;
    cout<<"\nAddress of A is "<<&a;
    cout<<"\nAddress of Ref is "<<&ref;
    return 0;
}
