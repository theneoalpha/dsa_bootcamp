#include <iostream>
#include <math.h>

using namespace std;

int main() {

  /*
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
  end = n - 1;
  first = -1;
  last = -1;

  while (start <= end) {
    mid = (start + (end - start)) / 2;

    if (arr[mid] == key) {
      last = mid;
      start = mid + 1;
    } else if (arr[mid] > key)
      end = mid - 1;
    else
      start = mid + 1;
  }

  cout << "The Last position of an element is " << last;
*/
  // LeetCode Solution Problem 34
  /*
    class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int start = 0 ,end = nums.size()-1, first =-1 , mid, last = -1;
            //Lets find first position of target value
            while(start<=end){
                mid = start + (end-start)/2;

                if(nums[mid]==target){
                    first = mid;
                    end = mid-1;
                }
                else if(nums[mid]>target)
                    end = mid-1;

                else
                    start = mid+1;

            }

            // Lets find Last position of target value

            start = 0,end = nums.size()-1;


            while(start<=end){
                mid = start+(end-start)/2;

                if(nums[mid]==target){
                    last = mid;
                    start = mid+1;
                }

                else if(nums[mid]>target)
                    end = mid-1;

                else
                    start = mid+1;
            }

            vector<int>a(2);
            a[0]=first;
            a[1]=last;
            return a;
        }

    };
  */



  // Problem 02 :Leetcode 69 :  Square root of a number

  
  int n,mid, ans;
  

  cout << "Enter the number whose square root are finding:";

  cin >> n;
  int  start = 1, end = n;
  if(n<2){
    cout<<n;
    ans = n;
  }
  
  while (start <= end) {
    mid = start + (end - start) / 2;
    if (mid * mid == n) {
      ans = mid;
      break;
    } else if (mid * mid > n) {
      end = mid - 1;
    } else {
      ans = mid;
      start = mid + 1;
    }
  }
  cout << "The number is: " <<ans;
}