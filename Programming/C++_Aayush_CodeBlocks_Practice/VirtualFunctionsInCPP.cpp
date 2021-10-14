#include<iostream>
using namespace std;
class base
{
  public :
      void disp(void)
      {
          cout<<"\nBase Class Disp ";
      }
      virtual void show (void)
      {
          cout<<"\nBase Class Show ";
      }
};
class derived : public base
{
  public :
      void disp(void)
      {
          cout<<"\nDerived Class Disp ";
      }
       void show (void)
      {
          cout<<"\nDerived Class Show ";
      }
};
int main ()
{
    base *p;
    base objb;
    derived objd;
    p=&objb;
    p->disp();
    p->show();
    p=&objd;
    p->disp();
    p->show();
    return 0;
}
