#include <iostream>

using namespace std;

/*
bool Prime(int n) {
  if(n<2){
    cout<<"Not a Prime number";
    return 0;
  }
  for(int i=2;i<n;i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}
*/

int Fact(int a){
  int value = 1;
  for(int i = 1;i<=a;i++){
    value = value*i;
    
  }
  return value;
}

int main() {
  cout << "Day 07:  Functions \n ";


 /* 
   // Prime Number using function
  int c = Prime(8);
  cout<<c<<endl;
  int d = Prime(17);
  cout<<d<<endl;
 */

  //        Factorial of a number using function
  // 5! = 5*4*3*2*1 = 120
  int e = Fact(5);
  cout<<e;


}
