#include <iostream>
#include <math.h>

using namespace std;
//             Converting 'a' to 'A' Function
char ConvertToCapital(char x){
  char value = x - 'a' +'A';
  return value;
}


int Digit(int a){
  int count = 0;
  while(a){
    count = count+1;
    a = a/10;
  }
  return count;
}

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
int main() {
  cout << "Day 08: Functions 2 \n ";
//          converting 'a' to 'A' using function

 //  cout<<ConvertToCapital('n');

int num;
  cin>>num;


//     Amstrong number 
  // 153 -> 1^3+5^3+3^3 = 153 then yes amstrong
  // 1453 - > 1^4+4^4+5^4+3^4 = 1453 then yes amstrong else not
  int digit = Digit(num);
  int n = Armstrong(num,digit);

  cout<<n;
 
  
  
  

}
