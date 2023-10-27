#include <iostream>
#include <math.h>

using namespace std;


int main() {

  int arr[5] = {5,6,2,9,7};
  cout << "Day 11 : Arrays Sorting \n";
  /*
    // Problem 01:  Selection Sorting in increasing order by checking  first to last element of an array
  for(int i=0;i<5;i++){
    int index = i;
    for(int j=i+1;j<4;j++){
      if(arr[j]<arr[index])
        index = j;
    }
    swap(arr[index],arr[i]);
  }
    for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
    }

*/
  
  // Problem 02 H.W.:  Selection Sorting in increasing order by checking last to first element of an array
for(int i=4;i>=0;i--){
  int index = i;
  for(int j=i-1;j>=0;j--){
    if(arr[j]>arr[index])
      index = j;
  }
  swap(arr[index],arr[i]);
}
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  
        }