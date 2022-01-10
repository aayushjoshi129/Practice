#include <iostream>
using namespace std;
int updating(int arr[],int size){
  arr[0]=120;
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"Update Function Done"<<endl;
}
int main(){
  int ar[3] = {1,2,4};
  updating(ar,3);
  for(int i=0;i<3;i++){
    cout<<ar[i]<<" ";
  }
  cout<<"Main Function Done"<<endl;
}