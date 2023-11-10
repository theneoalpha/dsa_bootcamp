#include <iostream>
#include <math.h>


using namespace std;


int main() {
    // Problem 01 : Finding the first and last position of an element
  cout << "Leetcode 34 . Finding First and Last Position of element in sorted "
          "array\n";
  int n;
  int arr[1000];
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter the element of the array in sorted manner: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "The input array elements are: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  int key;
  cout << "Enter the element which you want to find: ";
  cin >> key;
  int start = 0;
  int end = n - 1;
  int first = -1;
  int last = -1;

  int mid;
  while (start <= end) {
    mid = (start + (end - start)) / 2;

    if (arr[mid] == key) {
      first = mid;
      end = mid - 1;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  cout << "The first position of an element is " << first;

  start = 0;
  end = n-1;
   first = -1;
  last = -1;
   
  while (start<=end) {
    mid = (start+(end-start))/2;

    if (arr[mid]==key) {
      last = mid;
      start = mid+1;
    }
    else if (arr[mid]>key) 
      end = mid-1;
    else 
      start = mid+1;
    
  }

   cout << "The Last position of an element is " << last;
}