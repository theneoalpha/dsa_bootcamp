#include <iostream>

using namespace std;

int main() {
 cout<<"Namaste Duniya\n";
  cout<<"Lets code the program for sum of digit problem\n";


  int num;
  cout<<"Enter the digit : ";
  cin>>num;

  while(num>9){
   int sum=0,rem;
  while(num>0){
    rem = num % 10;
   
    num=num/10;
     sum = sum+rem;
   
  }
     num = sum;
  }
  cout<<num;
}