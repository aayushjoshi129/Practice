#include<iostream>
using namespace std;
class A
{
protected:
    int m;
public :
    void get_m(int);
};
void A :: get_m(int x)
{
    m=x;
}
class B
{
protected:
    int n;
public :
    void get_n(int);
};
void B :: get_n(int x)
{
    n=x;
}
class C : public A , public B
{
    int c;
public:
    void add();
    void display();
};
void C :: add()
{
    c=m+n;
}
void C :: display()
{
    cout<<"\nValue of M is "<<m;
    cout<<"\nValue of N is "<<n;
    cout<<"\nAddition of M and N is "<<c;
}
int main ()
{
    C obj;
    obj.get_m(100);
    obj.get_n(200);
    obj.add();
    obj.display();
    return 0;
}
