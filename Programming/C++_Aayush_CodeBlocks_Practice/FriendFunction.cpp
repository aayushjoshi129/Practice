#include<iostream>
using namespace std;
class A;
class B
{
    int b;
public:
    void getval(int x)
    {
        b=x;
    }
    void putval(void)
    {
        cout<<"\nvalue of B is "<<b;
    }
    friend void add(A , B);
};
class A
{
 int a;
public:
    void getval(int x)
    {
        a=x;
    }
    void putval(void)
    {
        cout<<"\nvalue of A is "<<a;
    }
    friend void add(A , B);
};
void add(A ob1 , B ob2)
{
    cout<<"\nthe sum of A and B is = "<<ob1.a+ob2.b;
}
int main ()
{
    A a;
    B b;
    a.getval(100);
    b.getval(200);
    a.putval();
    b.putval();
    add(a,b);
    return 0;
}
