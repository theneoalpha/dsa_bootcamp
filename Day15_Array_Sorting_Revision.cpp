#include <iostream>
using namespace std;


int main() {
    // Sorting : Selection Sort
  cout << "Array Sorting : Selection sort!\n";
  int arr[5] = {7,4,12,8,54};
  

for(int i =0;i<5;i++){
  int index =i;
        for(int j=i+1;j<5;j++)
           {
             if(arr[index]>arr[j])
               index = j;
      
          }
            swap(arr[index],arr[i]);


   }
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
