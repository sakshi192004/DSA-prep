// Problem Statement: Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1. Note: Consider 0 based indexing

// Examples
// Example 1:
// Input:
//  N = 7, target = 13, array[] = {3, 4, 13, 13, 13, 20, 40}
// Output:
//  4
// Explanation:
//  The target value 13 appears for the first time at index number 2 in the array.

// Example 2:
// Input:
//  N = 7, target = 60, array[] = {3, 4, 13, 13, 13, 20, 40}
// Output:
//  -1
// Explanation:
//  Target value 60 is not present in the array, so the output is -1.
#include <iostream>
using namespace std;
int searchLastOccurance(int arr[], int n, int target)
{
  int low = 0;
  int high = n - 1;
  int res = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
      res = mid;
      low = mid + 1;
    }
    else if (arr[mid] > target)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  if (res == -1)
  {
    return -1;
  }
  return res;
}
int firstOccurance(int arr[], int n, int target)
{
  int low = 0;
  int high = n - 1;
  int res = -1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target){
      res=mid;
      high= mid-1;
    }else if(arr[mid]>target){
      high= mid-1;
    }else{
      low=mid+1;
    }
  }
   if (res == -1)
  {
    return -1;
  }
  return res;
}
int main()
{
  int arr[] = {3, 4, 13, 13, 13, 20, 40};
  int n = sizeof(arr) / sizeof(int);
  cout << searchLastOccurance(arr, n, 13);
  cout<<firstOccurance(arr,n,13);
  return 0;
}