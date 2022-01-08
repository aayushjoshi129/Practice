#include <iostream>
using namespace std;
int add(int a){
  a=a/2;
  return a;
}
int main(){
  int n;
  cin>>n;
  add(n);
  cout<<n<<endl;
}