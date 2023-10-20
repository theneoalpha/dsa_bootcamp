#include <iostream>
#include <math.h>

using namespace std;
//             Converting 'a' to 'A' Function
char ConvertToCapital(char x){
  char value = x - 'a' +'A';
  return value;
}

/*
int Digit(int a){
  int count = 0;
  while(a){
    count = count+1;
    a = a/10;
  }
  return count;
}
*/
/*
bool Armstrong(int num , int digit){
  int value = num;
  int ans = 0;
  while(value){
    int rem = value%10;
    value = value/10;
    ans = ans+ pow(rem,digit);
  }
  if(ans == num){
    return 1;
  }
  else{
    return 0;
  }
  
}
*/
/*
//Trailing Zeroes
int TrailingZero(int a ){
  int number = 0;
  while(a>5){
    number = number + a/5;
    a = a/5;
  }
  return number;
}
*/

/*
// Rectangle or not
bool Rect(int a , int b, int c , int d){
  if(a==b && c==d || a==c && b==d || a==d && b==c ){
    return true;
  }
  else{
    return false;
  }
}
*/
/*
int Bishop(int row,int col){
  int count = 0;
  count = count + min(8 - row , 8 - col);
  count = count + min(8 - row ,col - 1 );
  count = count + min(row - 1, col - 1);
  count = count + min(row - 1, 8 - col);


    return count;
}
*/
// Nim Game
bool NimGame(int a){
  if(a%4 == 0)
    return 1;
  else
    return 0;
}

int main() {
  cout << "Day 08: Functions 2 \n ";
  
//      Problem 01:     converting 'a' to 'A' using function

 //  cout<<ConvertToCapital('n');

//int num;
  // cin>>num;

/*
//   Problem 02 :   Amstrong number 
  // 153 -> 1^3+5^3+3^3 = 153 then yes amstrong
  // 1453 - > 1^4+4^4+5^4+3^4 = 1453 then yes amstrong else not
  int digit = Digit(num);
  int n = Armstrong(num,digit);

  cout<<n;
 */
/*
  // Problem 03 : Trailing Zeroes in a Factorial (7! last me kitne zero hai)

  int value = TrailingZero(num);
  cout<<value;
*/

  /*
  //Problem 04:  Can I form rectangle by given four numbers

  int a,b,c,d;
  cout<<"Enter the sides value: ";
  cin>>a>>b>>c>>d;
  cout<<Rect(a,b,c,d);
*/
/*
  //Problem 05: Total Moves for  Bishop (oot : Diagonally movement)
  int a,b;
  cout<<"Enter the Position of Bishop: ";
  cin>>a>>b;
  cout<<Bishop(a,b);

  */

  //Problem 06: Nim game

  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<NimGame(num);
}
