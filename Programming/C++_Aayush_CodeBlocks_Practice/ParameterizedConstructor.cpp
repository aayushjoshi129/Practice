#include<iostream>
using namespace std;
class test
{
int a,b;
public :
    test(int x , int y)
    {
        a=x;
        b=y;
    }
    void disp(void)
    {
        cout<<"\nvalue of A is "<<a;
        cout<<"\nvalue of B is "<<b;
    }
};
int main()
{
    test t(100,200);
    t.disp();
    return 0;
}
