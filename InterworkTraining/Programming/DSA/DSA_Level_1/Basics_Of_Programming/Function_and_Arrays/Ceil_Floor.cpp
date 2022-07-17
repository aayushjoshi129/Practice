#include <iostream>
#include <math.h>
using namespace std;

void cfl(int arr[],int size,int key){
    int ceil=-1,floor=-1;
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            ceil=arr[i];
            floor=arr[i];
        }

        else if(key>arr[i] && key<arr[i+1]){
            floor=arr[i];
            ceil=arr[i+1];
        }
        else if(key>arr[size-1]){
            ceil=-1;
            floor=-1;
        }
    }
    cout<<"Ceil Value is "<<ceil<<endl;
    cout<<"Floor Value is "<<floor<<endl;
}

int main()
{
    int n, key, arr[100];
    cin >> n;
    int output[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter Key : ";
    cin>>key;

    cfl(arr,n,key);

}