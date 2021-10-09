#include<iostream>
using namespace std;
int sqr(int);
int main()
{
    int a,result;
    cout<<"enter the number ";
    cin>>a;
    result=sqr(a);
    cout<<"the square of "<<a<<" is "<<result;
    return 0;
}
int sqr(int x)
{
    return(x*x);
}
