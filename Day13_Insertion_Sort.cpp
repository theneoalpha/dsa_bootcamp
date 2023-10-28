#include <iostream>
#include <math.h>

using namespace std;


int main() {
  cout << "Day 13 : Insertion Sort \n";


//              Problem 01 : arranging element of an array in increasing order by using insertion sort
int n;
  int arr[1000];
cout<<"Enter the size of an array: ";
  cin>>n;

  cout<<"Enter the "<<n<<" element to store in an array: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }



  for(int i=1; i<n;i++){
    for(int j=i; j>=0;j--){
      if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
      }
      else 
        break;
    } 
  }

  cout<<"After applying insertion sort: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }


  
        }