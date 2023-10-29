#include <iostream>
#include <math.h>

using namespace std;

int main() {
  cout << "Day 14 : Binary Search \n";

  int arr[1000];
  int n;
  cout << "Enter the size of an array: ";
  cin >> n;
  cout << "Enter the " << n << " element in increasing order: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "The entered array is : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  int key;
  cout << "\n Enter the Key element which you want to find in array: ";
  cin >> key;
  int start, end;
  start = 0;
  end = n - 1;

  while (start <= end) {

    int mid = (start + end) / 2;
    if (arr[mid] == key) {
      cout << "Element is found at " << mid+1 << "th position";
      return 0;
    } else if (arr[mid] < key) {
      start = mid + 1;
    }

    else {
      end = mid - 1;
    }
  }
  cout<<"Element is out of array";
}