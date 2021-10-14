#include<iostream>
using namespace std;
int main ()
{
    int n,i;
    float *p,total=0;
    cout<<"\nenter the number of subjects : ";
    cin>>n;
    p=new float[n];
    cout<<"\nenter the marks : ";
    for(i=0;i<n;i++)
    {
        cout<<"\nsubject "<<(i+1)<<" : ";
        cin>>p[i];
    }
    cout<<"\nmarks ";
    for (i=0;i<n;i++)
    {
        cout<<"\nSubjects "<<(i+1)<<" : ";
        cout<<*(p+i);
        total = total + *(p+i);
    }
    cout<<"\nTotal Marks : "<<total;
    delete []p;
    return 0;
}

