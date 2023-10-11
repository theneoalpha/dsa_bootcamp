#include <iostream>
using namespace std;
int main() {
cout<<"LeetCode Problems: ";

/*
  //        Problem 01 (Add digit and convert in single digit)


  //     143 = 1+4+3 = 8,
  //   2458 -> 2+4+5+8 = 19 ->  1+9 = 10 -> 1+0 = 1
int num = 68;

  while(num>9){
      int  rem,ans=0;
  
  while(num>0){
    rem = num % 10;
    num = num / 10;
    ans = ans + rem;
  }
  num = ans;
    }
  cout<<num<<" ";


 */ 

  //               Problem 02 : Leap Year checker

  // Leap Years: 1600,1200,2000,2004,2008

  int year = 1200;
  if(year % 400 ==0){
    cout<<"Leap Year";
  }
  else if( year % 4 == 0 && year % 100 != 0){
    cout<<"Leap Year";
  }
  else{
    cout<<"Not a leap Year";
  }

//               Ending of the Problem 02


  
}

