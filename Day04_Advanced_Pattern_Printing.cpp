#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";

  /*
//              Problem 01

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

  int row,col;

  for(row=1;row<=5;row=row+1){
    for(col=1;col<=(5-row);col=col+1){
      cout<<" "<<" ";
    }
    for(col=1;col<=(row*2)-1;col=col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }

  //              Ending of the Problem 01

  */
  /*
  //                  Problem 02

    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1


    int row,col;
    for(row=1;row<=5;row=row+1){
      for(col=1;col<=(5-row);col=col+1){
        cout<<" "<<" ";
      }
      for(col=1;col<=row;col=col+1){
        cout<<col<<" ";
      }
      for(col=(row-1);col>=1;col=col-1){
        cout<<col<<" ";
      }
      cout<<endl;

    }
    //            Ending of the Problem 02

    */
  /*
    //                  Problem 03

  // * * * * * * * * *
  //   * * * * * * *
  //     * * * * *
  //       * * *
  //         *

    int row,col;
    for(row=5;row>=1;row=row-1){
      for(col=1;col<=(5-row);col=col+1){
        cout<<" "<<" ";
      }
      for(col=1;col<=(2*row)-1;col=col+1){
        cout<<"*"<<" ";
      }
      cout<<endl;
    }

    */

  /*
  //              Problem 04 IMPORTANT

//n =4;
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
  int row,col;

  for(row=1;row<=4;row=row+1){
    for(col=1;col<=4-(row-1);col=col+1){
      cout<<"*"<<" ";
    }
    for(col=1;col<=2*row-2;col=col+1){
      cout<<" "<<" ";
    }
    for(col=1;col<=4-(row-1);col=col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
for(row=1;row<=3;row=row+1){
    for(col=1;col<=(row+1);col=col+1){
    cout<<"*"<<" ";
       }
    for(col=1;col<=4-(2*row-2);col=col+1){
    cout<<" "<<" ";
      }
    for(col=1;col<=(row+1);col=col+1){
    cout<<"*"<<" ";
      }
    cout<<endl;
}

//                Ending of the Problem 4

*/

  /*
  //                 Printing Problem 05
int row,col;
  for(row=1;row<=4;row=row+1){
    for(col=1;col<=row; col= col+1){
      cout<<"*";
    }
    for(col=1;col<=(4*2-(2*row));col=col+1){
      cout<<" ";
    }
    for(col=1;col<=row;col=col+1){
      cout<<"*";
    }
    cout<<endl;
  }
for(row=1;row<=3;row=row+1){
  for(col=1;col<=3-(row-1);col=col+1){
    cout<<"*";
  }
  for(col=1;col<=2*row; col= col+1){
    cout<<" ";
  }
  for(col=1;col<=3-(row-1);col=col+1){
    cout<<"*";
  }
  cout<<endl;
}


 //              Ending of the Problem 05

*/

  /*
    //                  Problem 06


  //    *
  //   * *
  //  * * *
  // * * * *
  // * * * *
  //  * * *
  //   * *
  //    *
    int row,col;
    for(row=1;row<=4;row=row+1){
      for(col=1;col<=(4-row);col=col+1)
        cout<<" ";

      for(col=1;col<=row;col=col+1)
        cout<<"*"<<" ";

      cout<<endl;
    }

    for(row=1;row<=4;row=row+1){
      for(col=1;col<=(row-1);col=col+1)
        cout<<" ";

      for(col=1;col<=(4-(row-1));col=col+1)
        cout<<"*"<<" ";

        cout<<endl;
    }
  //Ending of the Problem 06
  */
}