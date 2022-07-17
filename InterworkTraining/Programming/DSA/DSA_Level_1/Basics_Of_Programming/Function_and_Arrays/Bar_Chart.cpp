#include <iostream>
using namespace std;

int MAX(int arr[],int size){
    int maxElem = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(maxElem<arr[i]){
            maxElem = arr[i];
        }
    }
    return maxElem;
    
}

int main()
{
    int n, arr[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxElem = MAX(arr,n);

    // This Loop Sets The Height of Column (Or Can Be Called as No. Of Rows).
    for (int i = maxElem; i >=1; i--)
    {
    // This Loop Prints the Stars and Empty Spaces in Every Row.
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>=i){
                cout<<"*\t";
            }else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}