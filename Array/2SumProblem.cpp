// Problem Statement: Given an array of integers arr[] and an integer target.

// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

// Examples

// Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
// Output : YES
// Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for first variant for second variant output will be : [1,3].

// Input: N = 5, arr[] = {2,6,5,8,11}, target = 15
// Output : NO.
// Explanation: There exist no such two numbers whose sum is equal to the target. 

#include<iostream>
#include<algorithm>
using namespace std;
int TwoSumProblem(int arr[],int n,int target){
  sort(arr,arr+n);
  int left=0;
  int right=n-1;
  while(left<right){
    
    if(arr[left]+arr[right]==target){
    return 1;
    }else if(arr[left]+arr[right]>target){
      right--;
    }else{
      left++;
    }
    
  }
  return false;
}
int main(){
  int arr[5]={2,6,5,8,11};
  int n=sizeof(arr)/sizeof(int);
  int target=15;
  cout<<TwoSumProblem(arr,n,target);
  return 0;
}