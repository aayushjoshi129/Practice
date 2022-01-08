#include<iostream>
using namespace std;
int fact(int n){
int fact = 1;
  for(int i=1;i<=n;i++){
    fact = fact * i;
  }
  return fact;
}

int nCr(int n, int r){
int num = fact(n);
int den = fact(r) * fact(n-r);

  return (num/den);
}

int nPr(int n, int r){
int num = fact(n);
int den = fact(n-r);

  return (num/den);

}

int main(){
  int n, r, fact = 1;
  cout<<"Enter N : ";
  cin>>n;
  cout<<"Enter R : ";
  cin>>r;

  int ncr = nCr(n,r);
  int npr = nPr(n,r);
  cout<<"Value of nCr is "<<ncr<<endl;
  cout<<"Value of nCr is "<<npr<<endl;
}