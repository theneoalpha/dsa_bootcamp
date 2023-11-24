#include <iostream>
#include <math.h>

using namespace std;

int main() {
// Peak element in an mountain array
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
  
}