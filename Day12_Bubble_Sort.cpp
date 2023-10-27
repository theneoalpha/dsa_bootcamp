#include <iostream>
#include <math.h>

using namespace std;


int main() {
  cout << "Day 11 : Bubble Sort \n";
  
  int arr[5] = {5,6,2,9,7};
  
  for(int i = 3;i>=0;i--){    // i is for rounds 
    for(int j=0;j<i;j++){    // j is for swapping
      if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
      
    }
  }
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }


  
  
        }