#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    int sizeArr=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < sizeArr; i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    
// ARRAY USING STL

array<int,5> a = {6,7,8,9,10};

//size of array
int sizeA = a.size();

    for (int i = 0; i < sizeA; i++)
    {
     cout<<a[i]<<" ";
    }
    cout<<endl;

    // Element can be accessed using at
    cout<<"Element at Index 2 in A array is ->"<<a.at(2)<<endl;

    // Check Array is Empty or Not
    cout<<"Array is Empty or Not -> "<<a.empty()<<endl;

    // First Element in Array
    cout<<"First Element in Array A is -> "<<a.front()<<endl;

        // Last Element in Array
    cout<<"Last Element in Array A is -> "<<a.back()<<endl;


}