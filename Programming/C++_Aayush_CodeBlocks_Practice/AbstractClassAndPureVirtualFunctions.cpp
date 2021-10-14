#include<iostream>
using namespace std;
class base
{
public :
    virtual void disp()=0;
};
class D : public base
{
     public :
    void disp()
    {
        cout<<"\nDerived Class ";
    }
};
 /* int main ()
{
    D obj;
    obj.disp();
    return 0;
}
*/
int main ()
{
 base *ptr;
 D obj;
 ptr=&obj;
 ptr->disp();
 return 0;
}
/* same output will produce if we use main code as this or upper one */
