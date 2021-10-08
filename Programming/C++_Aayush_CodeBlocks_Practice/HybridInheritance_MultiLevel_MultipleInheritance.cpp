#include<iostream>
using namespace std;
class student
{
    int roll;
public :
    void getroll(int x)
    {
        roll=x;
    }
void putroll()
{
    cout<<"\nRoll number is "<<roll;
}
};
class test : public student
{
protected:
    float t1,t2;
public:
    void getmarks(float x , float y)
    {
        t1=x;
        t2=y;
    }
    void putmarks()
    {
        cout<<"\nMarks are "<<t1<<" and "<<t2;
    }
};
 class sports
{
protected:
    float sp;
public:
    void getsp(float x)
    {
        sp=x;
    }
    void putsp()
    {
        cout<<"\nsports score is "<<sp;
    }
};
class result : public test , public sports
{
    float total;
public:
    void disp();
};
void result :: disp()
{
    total=t1 + t2 + sp;
    putroll();
    putmarks();
    putsp();
    cout<<"\ntotal score is "<<total;
}
int main()
{
    result obj;
    obj.getroll(101);
    obj.getmarks(80.5,82.3);
    obj.getsp(9.5);
    obj.disp();
    return 0;
}

