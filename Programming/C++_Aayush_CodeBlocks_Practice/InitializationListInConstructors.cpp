#include<iostream>
using namespace std;
class base
{
    int a;
public :
    base (int x)
    {
        a=x;
    }
    void dispa()
    {
        cout<<"\nValue of A "<<a;
    }
};
class derived
{
    int b;
public :
    derived (int x,int y) : base(x),b(y)
    {
        cout<<"\nDerives Class Constructor Initialized";
    }
    void dispb()
    {
        cout<<"\nValue of B "<<b;
    }
};
int main ()
{
    derived obj(10,20);
    obj.dispa();
    obj.dispb();
    return 0;
}
