#include <iostream>
using namespace std;
int find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,key, arr[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter Key to Search : ";
    cin>>key;
    int index = find(arr,n,key);
    cout<<index<<endl;
}