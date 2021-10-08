#include<iostream>
using namespace std;
class test
{
    int a,b;
public :
    test ();
    test (int x);
    test (int x , int y);
    void disp();
};
test ::test ()
{
    a=0;
    b=0;
}
test ::test (int x)
{
    a=b=x;
}
test ::test (int x , int y)
{
    a=x;
    b=y;
}
void test :: disp()
{
    cout<<"\nValue of A is "<<a;
    cout<<"\nValue of B is "<<b;
}
int main ()
{
    test A;
    test B (100);
    test C (100,200);
    cout<<"\nObject A ";
    A.disp();
     cout<<"\nObject B ";
    B.disp();
     cout<<"\nObject C ";
    C.disp();
    return 0;
}

