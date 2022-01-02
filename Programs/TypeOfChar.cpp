#include <iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter Character : ";
  cin>>ch;
  int input = ch;


if (ch>=97 && ch<=122){
  cout<<"This is LowerCase Letter" << endl;
}
else if (ch>=65 && ch<=90){
  cout<<"This is UpperCase Letter" << endl;
}
else if (ch>=48 && ch<=57){
  cout<<"This is an Integer" << endl;
}
else{
  cout<<"Any Wrong Input" << endl;
}


}