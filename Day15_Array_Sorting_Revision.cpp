


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
/*
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
 */ 
// Problem 04 : Binary Search
  cout << "Revising Binary search\n";
int n;
  int arr[1000];
  cout<<"Enter the size of the array: ";
  cin>>n;
  cout<<"Enter the element of the array in sorted manner: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
cout<<"The input array elements are: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }


int key;
  cout<<"Enter the element which you want to find: ";
  cin>>key;
  int start = 0;
  int end = n-1;

  while(start<=end){
  int mid = (start + end)/2;
if(arr[mid]==key){
  cout<<"The element is at "<<mid<<" position.";
  return 0;
}
    else if(arr[mid]<key){
      start = mid+1;
    }
    else{
      end = mid-1;
    }
  
  }

  cout<<"Element not exist in an array.";




  
}