#include<iostream>
using namespace std;
int main ()
{
    int sal,b;
    cout<<"enter the salary : ";
    cin>>sal;
    cout <<"\n";
    if (sal>=10000)
    {
        b=(sal*10)/100;
        cout<<"Bonus is :"<< b;
        sal=sal+b;
        cout<<"\n";
        cout<<"The new salary of the employee is :"<<sal;
        return 0;
    }
}

