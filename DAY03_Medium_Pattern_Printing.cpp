#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";
/*               Medium level Printing Problem              
                Printing Problem 01
_ _ _ _ *
_ _ _ * *
_ _ * * *
_ * * * *
* * * * *


  

  int row,col;
  for(row=1;row<=5;row= row+1){
    for(col=1;col<=(5-row);col=col+1){
      cout<<"_"<<" ";
    }
    for(col=1;col<=row;col=col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
  //              Ending of the Problem 01
  */


  /*
  //             Printing Problem 2

// _ _ _ _ 1
// _ _ _ 2 2
// _ _ 3 3 3
// _ 4 4 4 4
// 5 5 5 5 5


  int row,col;

  for(row=1;row<=5;row=row+1){
    for(col=1;col<=(5-row);col=col+1){
      cout<<"_"<<" ";
    }
    for(col=1;col<=row;col=col+1){
      cout<<row<<" ";
    }
    cout<<endl;
  }
                  Ending of the problem 02

  */
/*
  //                    Problem 03

// _ _ _ _ 1
// _ _ _ 1 2
// _ _ 1 2 3
// _ 1 2 3 4
// 1 2 3 4 5



  int row,col;
  for(row=1;row<=5;row=row+1){
    for(col=1;col<=(5-row);col=col+1){
      cout<<"_"<<" ";
    }
    for(col=1;col<=row;col=col+1){
      cout<<col<<" ";
    }
    cout<<endl;
  }

//              Ending Of the Problem 03

*/

  /*
//                  Problem 04

  
// _ _ _ _ A
// _ _ _ A B
// _ _ A B C
// _ A B C D
// A B C D E


  int row;
  char col;
  for(row=1;row<=5;row=row+1){
    for(col=1;col<=(5-row);col=col+1)
    {
      cout<<"_"<<" ";
    } 
    for(col='A';col<='A'+(row-1);col=col+1){
      
      cout<<col<<" ";
    }
    cout<<endl;
  }

//            Ending of the Problem 04

  */
/*
//                      Problem 05
  
// _ _ _ _ 1
// _ _ _ 2 1
// _ _ 3 2 1
// _ 4 3 2 1
// 5 4 3 2 1


  int row,col;

  for(row=1;row<=5;row=row+1){
    for(col=1;col<=(5-row);col = col+1){
      cout<<"_"<<" ";
    }
    for(col=row;col>=1;col=col-1){
      cout<<col<<" ";
    }
    cout<<endl;
  }
  //                Ending of the Problem 05

*/
  
}