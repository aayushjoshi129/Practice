#include <iostream>
using namespace std;

void Sub_Array(int arr[],int n){
    int i=0;
    while(i<n){
        for(i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for (int k = i; k <=j ; k++)
                {
                    cout<<arr[k]<<"\t";
                }
                cout<<endl;
                
            }
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, r, arr[100];
    cin >> n;
    int output[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Inverse " << endl;
    display(arr, n);
    cout<<endl;
    cout<<"The Subsets are "<<endl;
    Sub_Array(arr,n);
}