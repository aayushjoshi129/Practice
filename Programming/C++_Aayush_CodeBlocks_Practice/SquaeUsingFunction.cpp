#include<iostream>
using namespace std;
void sqr(void);
int main ()
{
    sqr();
    return 0;
}
void sqr(void)
{
    int a;
    cout<<"enter the number : ";
    cin>>a;
    int b;
    b=a*a;
    cout<<"the square of "<<a<<" is "<<b;
}
