#include<iostream>
using namespace std;
class A
{
public :
    virtual disp()=0;
};
class B : public A
{
    int val1;
public :
    B (int x)
    {
        val1=x;
    }
   void disp()
    {
        cout<<"\nVal 1 in class B "<<val1;
    }
};
class C : public A
{
    int val2;
public :
    C (int x)
    {
        val2=x;
    }
 void disp()
    {
        cout<<"\nVal 2 in class C "<<val2;
    }
};
/*
int main ()
{
    A *bp;
    B objb(100);
    C objc(200);
    bp=&objb;
    bp->disp();
    bp=&objc;
    bp->disp();
    return 0;
}
*/
int main ()
{
    A *bp[2];
    B objb(100);
     objc(200);
     bp[0]=&objb;
     bp[1]=&objc;
     bp[0]->disp();
     bp[1]->disp();
     return 0;
}
