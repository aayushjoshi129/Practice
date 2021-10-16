#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"enter your age :";
    cin>>age;
    if (age>=10 && age<=50)
    {
        if(age>=10 && age<=18)
        {
        cout<<"you are a teenager\n";
    }
    else
    {
        cout<<"you are not a teenager\n";
    }
    }
    else{
        if (age<10)
        {
            cout<<"you are not a teenager\n";
        }
        else
        {
        cout<<"you are more than 50 years\n";
    }
    }
    return 0;
}

