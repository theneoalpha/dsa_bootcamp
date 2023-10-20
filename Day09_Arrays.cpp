#include <iostream>
#include <math.h>

using namespace std;

int main() {
cout<<"Day 09 : Arrays \n";
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
  // Address of a array element  
 // int arr[5] = {4,8,3,2,3};

 // address of a[1] position element
  // arr(it gives address of first element) + index number (a[1]) + number of bit for particular datatype(int ka no. of bit 4 hota hai)
  
  //                   arr+a[1]+4
 // cout<<arr+1+4;

  /*

// Problem 01 : Lets Find the lowest number in an array

  int arr[5] = {4,7,3 ,6 ,8};
  int number = 2147483647 ;
  for(int i = 0;i<5;i++){
    
    
    if(number > arr[i] )
    {
      number = arr[i];
    }
  }
 
cout<<number;

  */

  
//Problem 02:  Lets Find the Greatest number in an array
  int arr[5] = {4,7,3 ,6 ,8};
    int num = -2147483647 ;
    for(int i = 0;i<5;i++){


      if(num < arr[i] )
      {
        num = arr[i];
      }
    }

  cout<<num;

  
}
