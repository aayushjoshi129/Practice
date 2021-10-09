#include<iostream>
using namespace std;
inline int maxx(int x,int y)
{
    return ((x>y)?x:y);
}
int main ()
{
    int a,b;
    cout<<"enter 2 no.s ";
    cin>>a>>b;
    cout<<"greater of 2 is "<<maxx(a,b);
    return 0;
}
