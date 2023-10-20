#include <iostream>
#include <math.h>

using namespace std;

int main() {
cout<<"Day 09 : Arrays \n";

cout<<"5 Different Ways to declare and print arrays:";
/*  
// Method 01 : Array initalisation and simultenously declaration
  
   int a[5] = {4,5,3,5,2};
   cout<<a[0]<<" "<<a[3];
*/
  /*
// Method 02 : Array initalisation then declaration

  // int a[5];

   a[0]=5;
   a[1]=4;
   a[2]=7;
   a[3]=3;
   a[4]=9;
   cout<<a[4];
*/

/*  
// Method 03 : Array initalisation and declaring only some elements
  int a[5];

  a[0]=4;
  a[1]=8;
  cout<<a[3];  //It store garbage value 

*/

/*
// Method 04 :   initalisation and taking elements from user

  int a[5];
  for(int i=0;i<5;i++){
    cin>>a[i];
  }

  cout<<"The first indexing value in a array is "<<a[0]<<"\n "<<"The second indexing value in a array is "<<a[1]<<" ";

  */

/*
// Method 05 :   Initalisation and declaration and print complete element

  int a[5] = {6,7,5,4,7};

  for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
  }
*/  
}
