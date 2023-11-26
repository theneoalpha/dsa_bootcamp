#include <iostream>
#include <math.h>

using namespace std;

int main() {

  /*
// Problem 01 LeetCode 853 : Peak element in an mountain array
  // eg. arr = {4, 5,6 ,7 ,8,10,8,6,4}
  // output = 10;



  int arr[7]= {4,5,6,7,8,10,8};
  int start = 0;
  int end = 6;
  while(start<=end){
    int mid = start+(end-start)/2;

    if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
      cout<<"The Peak element in an array is "<<arr[mid];
      break;
      
    }
    else if(arr[mid]>arr[mid-1]){
      start = mid+1;
    }
    else
      end = mid-1;
  }


// Ending of Problem 01
  */



  // Problem 02 LeetCode 153 : Search smallest element in rotated array



  // arr[5] = {4,6,7,1,2}
  // output = 1


  int arr[8] = {4,6,7,9,10,2,3};

  // By default we assume arr[0] as smallest number
  int ans = arr[0];
  int start = 0;
  int end = 7;

  while(start<=end){
    
    int mid = start+(end - start)/2;

    // Left side sorted condition
    if(arr[0]<=arr[mid]){
      start = mid+1;
    }
    // Right side sorted condition
    else {
      ans = arr[mid];
      end = mid - 1;
    }
  }
  cout<<"The smallest element in rotated array is "<<ans;

  
}