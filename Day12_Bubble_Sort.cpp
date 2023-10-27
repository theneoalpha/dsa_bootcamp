#include <iostream>
#include <math.h>

using namespace std;


int main() {
  cout << "Day 11 : Bubble Sort \n";
  //                    Problem 01 : Bubble Sorting
// int arr[6] = {8,4,6,5,2,9};

//   for(int i = 4; i>=0;i--){
//     for(int j = 0;j< 5;j++){
//       if(arr[j]>arr[j+1])
//         swap(arr[j],arr[j+1]);
//     }
//   }
//   for(int i=0;i<6;i++)
//     cout<<arr[i]<<" ";
  
  //




  //Problem 02:  Sorting of an array by using Bubble Sort with optimized case time complexity
            int n;
              int arr[1000];
              cout<<"Enter the size of an array: ";
              cin>>n;

              cout<<"Enter the terms of an array: ";
              for(int i=0;i<n;i++){
                
                cin>>arr[i];
              }

              bool swapped = 0;
              for(int i=n-2;i>=0;i--){


              
                for(int j = 0; j<n;j++){
                  if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
                  swapped = 1;
                }

                if(swapped == 0)
                break;
              }

                    // Bool swapped help if the user gives sorted array then time complexity become n only
                
                  cout<<"The sorted array is: ";
                  for(int i=0;i<n;i++)
                    
                    cout<<arr[i]<<" ";
                  
              
                    }