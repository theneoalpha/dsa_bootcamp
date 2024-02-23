#include <iostream>
using namespace std;

int main() {
  cout << "Namaste Duniya\n";

  /*
  cout<<"Problem 01: Lets build a program of sum of digit";
  int num;
  cout<<"Enter the number: ";
  cin>>num;

 
  while(num>9){
    int sum =0,rem;
    while(num>0){

        rem = num%10;
        sum = sum+rem;
        num = num/10;
      }
      num = sum;
    
  }
    cout<<num;

  */
/*
  cout<<"Problem 02: Leap Year Checker";
  int year;
  cout<<"Enter the year: \n";
  cin>>year;
  if(year % 400 ==0){
    cout<<"Entered year is a leap year.";
  }
  else if(year%4==0 && year%100 !=0){
    cout<<"Entered year is a leap year.";
  }
  else{
    cout<<"Not a leap year";
  }
  */
 /*
  cout<<"Problem 03: Reverse the integer";
  int num,ans=0,rem;
  cout<<"Enter the number: ";
  cin>>num;
  

    while(num>0){
      rem = num%10;
      num = num/10;
      if(ans > 2147483647 / 10 || ans < -2147483647 / 10){
        ans = 0;
      }
      ans = ans*10+rem;
       
      
    }
    cout<<ans;
   */
/*
  cout<<"Problem 04: Checking whether the given number is a  power of 2 or not";
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  while(num != 1){
    if(num%2==1){
      cout<<"Not a power of 2";
      return 0;
    }
    num = num/2;
  }
  cout<<"Entered number is a power of 2";
   */
  
/*
  cout<<"Problem 05: Finding the square root of a number.";
  int num;
  cout<<"Enter the number: ";
  cin>>num;

  for(int i=1;i<=num;i++){
    if(i*i==num){
      cout<<"The square root is "<<i;
      return 0;
    }
    else if(i*i>num){
      cout<<i-1;
      return 0;
    }
  }

  */

  cout<<"Problem 06: palindrome Problem. eg 1 6 1  reverse will be same.";

  int num,value,ans=0,rem;
  cout<<"Enter the number: ";
  cin>>num;

  value = num;

  while(num!=0){
    rem = num%10;
    num = num/10;
    ans = ans*10+rem;
  }
  if(ans ==value){
    cout<<"Yes given number is palindrome.";
    
  }
  else{
    cout<<"Not a palindrome.";
  }
}