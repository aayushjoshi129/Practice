// # Time Complexity of Linear Search is O(n)

#include<iostream>
using namespace std;
  int searchArray(int arr[],int size,int num){
    int index=-1;
    for(int i=0;i<size;i++){
      if(num==arr[i]){
        index = i;
      }
    }
    return index;
  }
int main(){
  int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
  int n;
  cout<<"Enter Element to Search in Array : ";
  cin>>n;
  int index = searchArray(arr,10,n);
  if(index>=0){
  cout<<n<<" is present in the array at "<<index<<" index"<<endl;
  }
  else{
  cout<<n<<" is not present in the array."<<endl;
  }
}