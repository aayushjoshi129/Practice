#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(arr[j]<arr[i]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
}

}

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array Before Sorting : ";
    display(arr,n);
    cout<<"Array After Sorting : ";
    selectionSort(arr,n);
    display(arr,n);
}