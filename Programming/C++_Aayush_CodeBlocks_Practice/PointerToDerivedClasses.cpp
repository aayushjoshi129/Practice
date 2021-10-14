#include<iostream>
using namespace std;
class base
{
protected:
    int b;
public :
    void setb(int x)
    {
        b=x;
    }
    void disp(void)
    {
        cout<<"\n\tBase Class : ";
        cout<<"\n\t Value of B : "<<b;
            }
};
class derived : public base
{
    int d;
public :
    void setd(int y)
    {
        d=y;
    }
    void disp(void)
    {
        cout<<"\n\tderived Class : ";
        cout<<"\n\tValue of B : "<<b;
        cout<<"\n\t Value of D : "<<d;
            }
};
int main ()
{
    base *bp;
    base b;
    bp=&b;
    bp->setb(100);
    cout<<"\nbp points to base object ";
    bp->disp();
    derived d;
    bp=&d;
  //  bp->setd() this statement is invalid as it cannot access its own inherited classes;
  bp->setb(200);
  cout<<"\nbp now points to derived object";
  bp->disp();
  derived *dp;
  dp=&d;
  dp->setd(500);
  cout<<"\nderived type pointer ";
  dp->disp();
  cout<<"\nusing ((derived*)bp)";
  ((derived*)bp)->setd(300);
  ((derived*)bp)->disp();
  return 0;
}


