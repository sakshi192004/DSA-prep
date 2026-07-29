// Given an integer array arr of size N, sorted in ascending order (with distinct values), the array is rotated at any index which is unknown. Find the minimum element in the array.

// Pre-requisites: Search in Rotated Sorted Array I,  Search in Rotated Sorted Array II & Binary Search algorithm

// Examples
// Input: arr = [4,5,6,7,0,1,2,3]
// Output: 0
// Explanation: The minimum element in the array is 0.
// Input : arr = [3,4,5,1,2]
// Output: 1
// Explanation : The minimum element in the array is 1.
#include<iostream>
using namespace std;
int findMinimum(int arr[],int n){
  int low=0;
  int high=n-1;
  while(low<high){
    int mid = (low+high)/2;
    if(arr[mid]>arr[high]){
       low=mid+1;
    }else{
      high=mid;
    }
    return arr[low];
  }
}

int main() {
    int arr[8]={4,5,6,7,0,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<findMinimum(arr,n);
    return 0;
  }
   