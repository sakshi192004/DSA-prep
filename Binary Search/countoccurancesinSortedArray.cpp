// Problem Statement: You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array.

// Examples
// Example 1:
// Input:
//  N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
// Output
// : 4
// Explanation:
//  3 is occurring 4 times in 
// the given array so it is our answer.

// Example 2:
// Input:
//  N = 8,  X = 2 , array[] = {1, 1, 2, 2, 2, 2, 2, 3}
// Output
// : 5
// Explanation:
//  2 is occurring 5 times in the given array so it is our answer.
#include<iostream>
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
int countOccurances(int arr[],int n,int x){
  int firstOccur=firstOccurance(arr,n,x);
  int lastOccur =searchLastOccurance(arr,n,x);
  int countOccur=(lastOccur-firstOccur)+1;
  return countOccur;

}
int main(){
  int arr[]={1, 1, 2, 2, 2, 2, 2, 3};
  int n= sizeof(arr)/sizeof(int);
  cout<<countOccurances(arr,n,2);
  return 0;
}