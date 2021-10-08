#include<iostream>
using namespace std;
int add(void);
int main()
{
    int sum;
    sum=add();
    cout<<"addition is "<<sum;
    return 0;
}
int add()
{
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    return(a+b);
}

