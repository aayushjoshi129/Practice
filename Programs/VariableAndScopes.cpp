#include<iostream>
using namespace std;
int main(){
  int a=3;
  cout<<a<<endl;
  if(true){
    int a=5;
    cout<<a<<endl;
  }
  cout<<a<<endl;

    // if(true){
    //   int b=5;
    //   cout<<b<<endl;
    // }
    // cout<<b<<endl;    // Scope of b is within the if block so accesing outside is not possible


}