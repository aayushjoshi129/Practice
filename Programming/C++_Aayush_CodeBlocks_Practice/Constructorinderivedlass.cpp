#include<iostream>
using namespace std;
class A
{
    int a;
public :
    A (int x)
    {
        a=x;
    cout<<"\nA class Constructor initialised";
    }
    void dispa()
    {
        cout<<"\nvalue of A "<<a;
    }


};
class B
{
    int b;
public :
    B (int y)
    {
        b=y;
    cout<<"\nB class Constructor initialised";
    }
void dispb (void)
{
    cout<<"\nvalue of B "<<b;
}
};

class C : public B,public A
{
    int m;
public :
    C (int x,int y,int z) : A(x), B(y)
    {
        m=z;
    cout<<"\nC class Constructor initialised";
    }

    void dispm (void)
    {
        cout<<"\nvalue of m "<<m;
    }
    int main ()
    {
        C obj (10,20,30);
         obj.dispa();
         obj.dispb();
         obj.dispm();
         return 0;
    }
};
