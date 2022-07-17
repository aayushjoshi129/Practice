#include <iostream>
using namespace std;
int Reverse(int arr[], int size)
{
    int s=0;
    int e = size-1;
    while(s<e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    return 1;
}

int main()
{
    int n,key, arr[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Before Reversing "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Reverse(arr,n);
    cout<<"After Reversing "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}