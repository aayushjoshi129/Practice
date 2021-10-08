#include<iostream>
using namespace std;
int main ()
{
    int arr[3][3],i,j,sum=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<"enter 9 elements : ";
            cin>>arr[i][j];
        }
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<"\t";
            cout<<arr[i][j];
            cout<<"\t";
            sum=sum+arr[i][j];
        }
    cout<<"\nthe sum of rows is : "<<sum;
    cout <<"\n";
    sum=0;
}
return 0;
}
