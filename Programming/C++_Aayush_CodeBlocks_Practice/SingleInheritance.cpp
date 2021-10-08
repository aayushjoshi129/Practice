#include<iostream>
using namespace std;
class A
{
    int a;
public :
    void getval_a(int);
    int get_a();
};
class B : public A
{
    int b,c;
    public :
    void getval_b(int);
    void add();
    void dispval();
};
void A :: getval_a(int x)
{
    a=x;
}
int A :: get_a()
{
    return a;
}
void B :: getval_b(int x)
{
    b=x;
}
void B :: add()
{
    c=get_a();
    c=c+b;
}
void B :: dispval()
{
    cout<<"\nValue of A is "<<get_a();
    cout<<"\nValue of B is "<<b;
    cout<<"\nValue of C is "<<c;
}
int main ()
{
    int a,b;
    B obj;
    cout<<"\nEnter value of A ";
    cin>>a;
    cout<<"Enter value of B ";
    cin>>b;
    obj.getval_a(a);
    obj.getval_b(b);
     obj.add();
     obj.dispval();
     return 0;
}
