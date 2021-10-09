#include<iostream>
using namespace std;
int main ()
{
    int a=100;
    int *ptr1;
    int **ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    cout<<"\nValue of A is "<<a;
     cout<<"\nValue of A is "<<*ptr1;
      cout<<"\nValue of A is "<<**ptr2;
       cout<<"\nAddress of A is "<<&a;
        cout<<"\nAddress of A is "<<ptr1;
         cout<<"\nAddress of A is "<<*ptr2;
         return 0;
}
