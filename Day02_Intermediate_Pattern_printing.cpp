#include<iostream>
using namespace std;
int main(){
  //            Intermediate Printing pattern

/*
  //               Printing Problem 1

        // *
        // * * 
        // * * *
        // * * * *
  int row,col;
  for(row=1;row<=4;row=row+1){
    for(col=1;col<=row;col=col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
//              Ending of the problem 1

  */


/*
//                  Printing Problem2

      // 1
      // 1 2 
      // 1 2 3
      // 1 2 3 4  
  int row,col;
  for(row=1;row<=4;row=row+1){
    for(col=1;col<=row;col=col+1){
      cout<<col<<" ";
    }
    cout<<endl;
  }
  //              Ending of Problem 2
  */

  /*
  //                    Problem 3
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5  
  int row,col;
  for(row=1;row<=5;row=row+1){
    for(col=1;col<=row;col=col+1){
      cout<<row<<" ";
      
    }
    cout<<endl;
  }
//                 Ending of the problem 3

  */

/*
  //                    problem 4 IMPORTANT

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1  

  int row,col;

  for(row=1;row<=5;row=row+1){
    for(col=row;col>=1;col=col-1){
      cout<<col<<" ";
    }
    cout<<endl;
    //          Ending of Problem 4
    */

/*
  //                Problem 5

              // a
              // b b 
              // c c c
              // d d d d
              // e e e e e  
  int row;
  int col;

  for(row=1;row<=5;row=row+1){
    char name = 'a'+(row-1);
    for(col=1;col<=row;col=col+1){
      cout<<name<<" ";
    }
    cout<<endl;
    //            Ending of the Problem 5
}
    */

/*

  //              Problem 6
      // * * * * *
      // * * * * 
      // * * *
      // * *
      // *
  int row,col;

  for(row=5;row>=1;row=row-1){
    for(col=row;col>=1;col= col-1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
//                Ending of the Problem 6

*/

/*
//                        Problem 7
        // 1 2 3 4 5
        // 1 2 3 4
        // 1 2 3
        // 1 2
        // 1
  
  int row,col;

  for(row=1;row<=5;row=row+1){
    for(col=1;col<=5-row+1;col=col+1)
      {
        cout<<col<<" ";
      }
    cout<<endl;
  }
  
  //                Ending of the Problem 7

  */

/*

  //                  Problem 8  IMPORTANT

                      // 5
                      // 5 4
                      // 5 4 3
                      // 5 4 3 2
                      // 5 4 3 2 1  
  int row,col;

  for(row=1;row<=5;row= row+1){
    for(col=5;col>=5-(row-1);col=col-1){
      cout<<col<<" ";
    }
    cout<<endl;
  }
  //            Ending of the Problem 8

*/




  
  








}