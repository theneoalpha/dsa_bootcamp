#include <iostream>
#include <limits>
using namespace std;

int main() {
  cout << "LeetCode Problems: ";

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
  /*
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

  */
  /*
    //         Problem 03 : Reverse Integer

    // Reverse Integer : 123 -> 321

    int ans = 0, rem, num = 456;

    while (num > 0) {
      rem = num % 10;
      num = num / 10;

      if (ans > 2147483647 / 10 || ans < -2147483647 / 10) {
        cout << "0";
      }

      ans = ans * 10 + rem;
    }
    cout << ans << " ";

    //            Ending of Problem 03



  */
/*
  //        Problem 04 : Power of 2
  // 2^4 = 2*2*2*2 = 16

  int num;
  cin>>num;

  if(num<1){
    cout<<"Not a power of 2";
  }
  while(num!=1){
    if(num%2==1){
      cout<<"Not a power of 2";
     return 0;}
    num = num/2;
  }
  cout<<"Yes it is a power of 2";

//               Ending of Problem 4
 */

/*
  //              Problem 05: Square Root

  int num;
  cin>>num;
  for(int i=0;i<=num;i = i+1){
    if(i*i == num){
      cout<<i;
      return 0;
    }
    else if(i*i > num){
      cout<<(i-1);
      return 0;
    }
  }



  //       Ending of the Problem 05
  */


  //        Problem 06: Palindrome number

  // 161 -> 1,6,1 -> Palindrome (reverse will be same)

int num;
  cin>>num;

  int value = num;
int ans=0;
  while(num!=0){
    int rem = num%10;
    num = num/10;
    ans = ans*10 + rem;
  }
  if(ans == value){
    cout<<"Yes it is a palindrome";
  }
  else{
  cout<<"Not a palindrome";
  }

//                Ending of the Problem 06


}
