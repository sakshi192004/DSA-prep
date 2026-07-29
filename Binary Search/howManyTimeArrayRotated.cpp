// Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated.

// Pre-requisites: Find minimum in Rotated Sorted Array,  Search in Rotated Sorted Array II & Binary Search algorithm

// Examples
// Input : arr = [4,5,6,7,0,1,2,3]
// Result: 4
// Explanation: The original array should be [0,1,2,3,4,5,6,7]. So, we can notice that the array has been rotated 4 times.

// Input : arr = [3,4,5,1,2]
// Output : 3
// Explanation: The original array should be [1,2,3,4,5]. So, we can notice that the array has been rotated 3 times.

#include<iostream>
using namespace std;
int findRotation(int arr[],int n){//optimal
  int low = 0;
  int high = n-1;
  int ans = INT16_MAX;
  int index = -1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[low]<=arr[high]){
      if(arr[low]<ans){
        index = low;
        ans = arr[low];
      }
    }
    if(arr[low]<=arr[mid]){
      if(arr[low]<ans){
        index = low;
        ans = arr[low];
      }
      low = mid+1;
    }else{
      high = mid-1;
      if(arr[mid]<ans){
        index = mid;
        ans = arr[mid];
      }
    }
  }
  return index;
}
int main(){
  int arr[]={4,5,6,7,0,1,2,3};
  int n = sizeof(arr)/sizeof(int);
  cout<<findRotation(arr,n);
  return 0;
}