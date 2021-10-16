#include<iostream>
using namespace std;
class A
{
    int a;
public :
    void dispa()
    {
        a=10;
        cout<<"\nClass A = "<<a;
    }
};
class B : public virtual A
{
    int b;
public :
    void dispb()
    {
        b=20;
        cout<<"\nClass B = "<<b;
    }
};
class C : virtual public A
{
    int c;
public :
    void dispc()
    {
        c=30;
        cout<<"\nClass C = "<<c;
    }
};
class D : public B , public C
{
    int d;
public :
    void dispd()
    {
     d=40;
     cout<<"\nClass D = "<<d;
    }
};
int main()
{
    D obj;
    obj.dispa();
     obj.dispb();
      obj.dispc();
       obj.dispd();
       return 0;
}
