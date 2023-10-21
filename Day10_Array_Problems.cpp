#include <iostream>
#include <math.h>

using namespace std;


// SearchElement Function
int searchElement(int x ){
  int arr[5]= {1,3,4,5,6};
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
    cout<<arr[j];
  }
//             Ending of the Problem 02


  */
}