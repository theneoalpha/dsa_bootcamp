#include <iostream>
#include <math.h>

using namespace std;

// SearchElement Function
int searchElement(int x) {
  int arr[5] = {1, 3, 4, 5, 6};
  for (int i = 0; i < 5; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}
int main() {
  cout << "Day 10 : Arrays Solving Problems. \n";

  /*
   //  Problem 01: Search element in an array and return its index number
    // int a[4] = {5,6,7,8};
    // int n = 7;   return = 2(index number)  else return -1

  int x;

  //  int a[5] = {5, 7, 4, 3, 9};

    cout << "Enter the number: ";
    cin >> x;


    cout<<searchElement(x);

                      Ending of Problem 01
  */
  /*
    //                Problem 02: Reverse an array
  //     arr[5] = {4,6,8,9,3} =>  {3,9,8,6,4}
    int arr[5] = {4,6,8,9,3};

    int i = 0;
    int j = 4;

    while(i<j){
      swap(arr[i],arr[j]);
      i = i+1;
      j = j-1;



  }
    for(int j = 0;j<5;j++){
      cout<<arr[j]<<" ";
    }
  //             Ending of the Problem 02


    */
/*
  // Problem 03 : Second Greatest number among an array

          // lets find first greatest number
        int arr[5]={4,8,6,2,9};
          int ans = -2147483647;    //INT_MIN
          for(int i=0;i<5;i++)
            {
              if(arr[i]>ans){
                ans = arr[i];
              }
            }
          // Lets Find Second Greatest Number
             int second = -2147483647;   //INT_MIN
          for(int i =0;i<5;i++){
            if(arr[i] != ans){
              second = max(arr[i],second);
            }
          }
          cout<<second;

               //    Ending of the Problem 03
  */
/*
  //       Problem 04 : Missing Number in a sequence of numbers in an array
          int n = 5;
          int arr[5]= {1,2,3,5,6};     //MISSING - 3
        int sum = 0;
          for(int i=0;i<5;i++){
            sum = sum+arr[i];
          }
          int sumOfN = ((n+1)*(n+2))/2;
        
          int missingNumber = sumOfN-sum;
          cout<<missingNumber;
//            Ending of Problem 04
  */



  //           nth Fibonacci number using an array

                int arr[1000];
              int n;
                cin>>n;
                arr[0]=0;
                arr[1]=1;
              
                int ans;
                for(int i =2;i<n;i++){
                  arr[i] = arr[i-1]+arr[i-2];
                }
              cout<<arr[n-1];
  
        }