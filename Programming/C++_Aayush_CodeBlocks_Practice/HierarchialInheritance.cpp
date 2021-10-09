#include<iostream>
using namespace std;
class A
{
protected:
    int no;
public:
    void get_no()
    {
        cout<<"\n\nEnter the number ";
        cin>>no;
    }
};
class B : public A
{
public:
    void square()
    {
        cout<<"\nsquare of "<<no<<" is "<<(no*no);
    }
};
class C : public A
{
public:
    void cube()
    {
        cout<<"\ncube of "<<no<<" is "<<(no*no*no);
    }
};
int main ()
{
    B bobj;
    C cobj;
    bobj.get_no();
    bobj.square();
    cobj.get_no();
    cobj.cube();
    return 0;
}
