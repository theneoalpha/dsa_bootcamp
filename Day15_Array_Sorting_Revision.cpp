


#include <iostream>
using namespace std;


int main() {
  /*
    // Sorting  Method 1 : Selection Sort
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

*/
/*
// Sorting Method 02 : Bubble sort

  cout<<"Array sorting : Bubble sort \n";


  int arr[5] = {45, 74, 34, 23, 98};
  
  
  for(int i =3;i>=0;i--){
    
    for(int j=0;j<=i;j++){
      
          if(arr[j]>arr[j+1])
            swap(arr[i],arr[j]);
        }
   
  }


  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }

 */
// Sorting Method 03 : Insertion sort
  cout << "Insertion Sort\n";


  int arr[5] = {45,68,23,34,19};

  for(int i=1;i<5;i++){
    for(int j = i;j>0;j--){
      if(arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
      }
      else{
        break;
      }
    }
  }

  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  






  
}