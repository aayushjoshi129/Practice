#include<iostream>
using namespace std;

int reverse(char arr[],int i,int j){
    int li = i;
    int ri = j;
    while(li<ri){
        char temp = arr[li];
        arr[li] = arr[ri];
        arr[ri] = temp; 
        li++;
        ri--;
    }
    return 1;
}

int main(){
    char arr[] = {'a','b','c','d','e'} ;
    int r;
    cout<<"Enter Rotate Value : ";
    cin>>r;
    int size = (sizeof(arr)/sizeof(arr[0]));

    r = r % size;
    if(r<0){
        r = r + size;
    }

    // Part 1 Reverse
    reverse(arr,0,size-r-1);

    // Part 2 Reverse
    reverse(arr,size-r,size-1);

    // Part 3 Reverse
    reverse(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
