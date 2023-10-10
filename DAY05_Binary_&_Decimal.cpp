#include <iostream>
using namespace std;
int main() {
  cout << "Decimal to Binary conversion\n";

  // Simple Method 
  /*
int num = 13;
  int rem,mul = 1, ans =0;
  while(num>0){
    rem = num %2;
    num = num/2;
    ans = rem * mul + ans;
    mul = mul * 10;
  }
  cout<<"The Binary Representation of the given number is : "<<ans <<endl;
*/

// Little shortcut code

  int num = 13;
  int rem,mul =1 , ans =0;

  while(num>0){
    rem = num % 2;
    num /= 2;
    ans += rem* mul;
    mul *= 10;
  }
  cout<<"The Binary Representation in moderen code is : "<<ans <<endl;



  
}