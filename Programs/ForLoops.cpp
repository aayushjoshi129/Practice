#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the Value of N : ";
  cin>>n;



  // cout<<"Printing Counting from 1 to "<<n<<endl;

  // for(int i=1;i<=n;i++){
  //   cout<<i<<endl;
  // }


  // For Loop Can also be written as   
    // int i=1;
    // for(; ; ){
    //   if (i<=n){
    //     cout<<i<<endl;
    //   }
    //   else{
    //     break;     // break will terminate the loop as it encounters
    //   }
    //   i++;
    // }


  // Multiple Conditions can be write in for loop

    //   for(int a=0 , b=1 ; a>=0 && b>=0 ; a-- , b-- )
    //   cout<<a<<" "<<b<<endl;
    // }


  // Print Sum Upto N

    // int i,sum=0;
    // for(i=1;i<=n;i++){
    //   sum=sum+i;
    // }
    // cout<<"Sum Upto "<<n<<" terms is "<<sum<<endl;

  
  // Fibonacci Series

    // int a=0,b=1;
    // cout<<a<<" "<<b<<" ";
    // for(int i=1;i<=n;i++){
    //   int nextNum = a+b;
    //   cout<<nextNum<<" ";
    //     a = b;
    //     b = nextNum;
    // }


  // Prime OR Not

    // bool isPrime=1;
    // for (int i=2;i<n;i++){
    //   if(n%i==0){
    //     isPrime=0;
    //     break;
    //   }
    // }

    // if (isPrime){
    //   cout<<n<<" is a Prime Number";
    // }
    // else{
    //   cout<<n<<" is not a Prime Number";
    // }


  // Continue use

    // for (int i=1;i<=n;i++){
    //   cout<<"Hi"<<endl;
    //   cout<<"Hey"<<endl;
    //   continue;
    //   cout<<"Reply nhi kr rha ja bhaad me"<<endl;
    // }


  // Practice 1
  
    // for (int i=0;i<=5;i--){
    //   cout<<i<<" ";
    //   i++;
    // }

  // Practice 2
  
    //   for (int i=0;i<=15;i+=2){
    //   cout<<i<<" ";
    //   if(i&1){
    //     continue;
    //   }
    //   i++;
    // }

}