#include<iostream>
using namespace std;
int sum=100;
int main ()
{
    int sum=500;
    cout<<"\nsum is "<<sum;
    cout<<"\nsum is "<<::sum;
    return 0;
}
