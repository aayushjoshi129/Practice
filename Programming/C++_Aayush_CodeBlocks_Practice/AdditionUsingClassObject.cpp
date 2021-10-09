#include<iostream>
using namespace std;
class sum
{
    int a,b,t;
public:
    void getdata(void);
    void putdata(void);
};
void sum::getdata(void)
{
    cout<<"enter value of A and B ";
    cin>>a>>b;
}
void sum::putdata (void)
{
    t=a+b;
    cout<<"the sum of "<<a<<" and "<<b<<" is "<<t;
}
int main ()
{
    sum obj;
    obj.getdata();
    obj.putdata();
    return 0;
}
