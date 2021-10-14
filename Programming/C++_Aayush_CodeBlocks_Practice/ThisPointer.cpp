#include<iostream>
using namespace std;
class maximum
{
    int no;
public:
    maximum (int n=0)
    {
        this->no=n;
    }
    maximum& greater (maximum &x)
    {
        if(x.no>no)
        {
    return x;
    }
    else
    {
        return *this;
    }
    }
    void disp(void)
    {
        cout<<"\nGreater Value : "<<no;
    }
};
int main()
{
    maximum obj1(10),obj2(20),obj3;
    obj3=obj1.greater(obj2);
    obj3.disp();
    return 0;
}
