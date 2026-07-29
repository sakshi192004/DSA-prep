// Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).

// Examples
// Input: Arr[] = {1,3,2}
// Output: {2,1,3}
// Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.
// Input : Arr[] = {3,2,1}
// Output: {1,2,3}
// Explanation : As we see all permutations of {1,2,3}, we find {3,2,1} at the last position. So, we have to return the lowest permutation.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>nextGreaterPermutation(vector<int>& arr){
  int ind=-1;
  int n=arr.size();
  for(int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
      ind=i;
      break;
    }
  }
  if(ind==-1){
    reverse(arr.begin(),arr.end());
    return arr;
  }
  for(int i=n-1;i>ind;i--){
    if(arr[i]>arr[ind]){
      swap(arr[i],arr[ind]);
      break;
    }
  }
  reverse(arr.begin()+ind+1,arr.end());
  return arr;
  
}
int main(){
  vector<int>arr={1,3,2};
  nextGreaterPermutation(arr);
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}