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
/*
// Default parameter a = 4 
int Fact(int a=4){
  int value = 1;
  for(int i = 1;i<=a;i++){
    value = value*i;
    
  }
  return value;
}
*/

/*
// Pass By Value
void Swap(int x , int y){
  int z;
  z = x;
  x = y;
  y = z;
}
*/
// Pass By Reference
void Swap(int &x , int &y){
  int z;
  z = x;
  x = y;
  y = z;
}

// Function OverLoading

void Swap(float &p , float &q){
  float r;
  r = p;
  p = q;
  q = r;
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
  // int e = Fact(5);
  // cout<<e;

// Default Function without argument
//  cout<<Fact();



/*
  //         Pass By value & Pass By Reference

  // Pass by value
  int a,b;
  cin>>a>>b;
  Swap(a,b);
  cout<<a<<" "<<b<<" ";
  // No swapping because we only pass the value, on passing the value, //exact copy was created while fuction call , not passing the address of //the value.
*/

/*
  // Pass By Reference
  int a,b;
  cin>>a>>b;
  Swap(a,b);
  cout<<a<<" "<<b<<" ";

  // yaha pe address pass hota hai , ye swap ho jayega kyoki address pass // ho raha hai

  */

  // Function Overloading
  // int a,b;
  // cin>>a>>b;
  // Swap(a,b);
  // cout<<a<<" "<<b;

  float c,d;
  cin>>c>>d;
  Swap(c,d);
  cout<<c<<" "<<d;
  
  
}
