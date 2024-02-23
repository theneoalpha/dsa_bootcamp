#include <iostream>
using namespace std;

// Adding two numbers logic
// function declaration
int Add(int a,int b ){
  //Function logic
  return a+b;
}

// Prime Number Function Logic
bool Prime(int a){
  for(int i=2;i<a;i++){
    if(a%i==0){
      return 0;
    }
    
  }
return 1;
}

// Factorial of a given number
int Factorial(int n){
  int pro = 1;
  for(int i=1;i<=n;i++){
    pro = pro*i;
  }
  return pro;
}


int main() {
  cout << "FUNCTIONS\n";
  int a;
  //cout<<"Enter the number: ";
  // cin>>n;
  //Function calling
 // cout<<Add(4,5)<<endl;
 // cout<<Prime(n);
  cout<<"Enter the number: ";
  cin>>a;
  cout<<Factorial(a);

}