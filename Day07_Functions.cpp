#include <iostream>

using namespace std;


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


int main() {
  cout << "Day 07:  Functions \n ";


 
   // Prime Number using function
  int c = Prime(8);
  cout<<c<<endl;
  int d = Prime(17);
  cout<<d<<endl;
 

}