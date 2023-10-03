#include<iostream>
using namespace std;
int main(){
  /*                Pattern Printing Problem 1
            // * * * * *
            // * * * * *
            // * * * * *
            // * * * * *
            // * * * * *
  cout<<"Printing Problem 1";
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int row , col;
  for(row=1;row<=n;row++){

    for(col=1;col<=n;col++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;

                        Ending of Problem 1
  */ 

  /*
    //                     Problem 02

        // 10 10 10 10 10
        // 10 10 10 10 10
        // 10 10 10 10 10
        // 10 10 10 10 10
  int n;
cout<<"Enter the number: ";
  cin>>n;
  int row,col;

  for(row=1;row<=4;row = row+1){
    for(col=1;col<=5;col = col+1){
      cout<<n <<" ";
      
    }
    cout<<endl;
  }
                          Ending of Proble, 02
*/

 /* 
//                        Printing Problem 3

  // 1 1 1 1 1
  // 2 2 2 2 2
  // 3 3 3 3 3
  // 4 4 4 4 4 
  // 5 5 5 5 5 

   
int col,row;
  for(row=1;row<=5;row = row+1){
    for(col = 1;col<=5;col = col+1){
      cout<<row<<" ";
    }
    cout<<endl;
  }
                      Ending of the Problem 3 
*/
/*
                    //       Problem 4

// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

int row,col;

  for(row=1;row<=4;row =row+1){
    for(col=5;col>=1;col = col-1){
      cout<<col<<" ";
    }
    cout<<endl;
  }


//                    Ending Of the problem 4
*/

/*  
 //                       Problem 5
// 1 4 9 16 25 36
// 1 4 9 16 25 36
// 1 4 9 16 25 36
// 1 4 9 16 25 36  

int row,col;
  for(row =1;row<=4;row=row+1){
    for(col=1;col<=6;col=col+1){
      cout<<col*col<<" ";
    }
    cout<<endl;
  }
  

 //               Ending of the Problem 5

  */
/*
  //                    Problem 6
  // a a a a a
  // b b b b b
  // c c c c c
  // d d d d d  



        int col;
        char row;
  

          for(row = 'a';row<='d';row = row+1){
            for(col=1;col<=5;col=col+1){
              cout<<row<<" ";
              
            }
            cout<<endl;
          }

//                      Ending of the Problem 6

  */

/*
  //                        Problem 7
  
  // a b c d e
  // a b c d e
  // a b c d e

  int row;
  char col;
  for(row=1;row<=3;row= row+1){
    for(col='a';col<='e';col = col+1){
      cout<<col<<" ";
      
    }
    cout<<endl;
  }
  //              Ending of the Problem 7

  */
/*
  //                    Problem 8

  // 1 2 3 4 5
  // 6 7 8 9 10
  // 11 12 13 14 15
  // 16 17 18 19 20


  int count =1;

  int row,col;
  for(row=1;row<=4;row=row+1){
    for(col=1;col<=5;col=col+1){
      cout<<count<<" ";
        count = count + 1;
    }
    cout<<endl;
  }
  //            Ending of the Problen 8
  */
}