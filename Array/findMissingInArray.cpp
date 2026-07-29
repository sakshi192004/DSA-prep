// Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array..

// Examples
// Example 1:
// Input Format: N = 5, array[] = {1,2,4,5}
// Result: 3
// Explanation: In the given array, number 3 is missing. So, 3 is the answer.


// Example 2:
// Input Format: N = 3, array[] = {1,3}
// Result: 2
// Explanation: In the given array, number 2 is missing. So, 2 is the answer.
#include<iostream>
using namespace std;
int findMissing(int arr[],int n){
  int res=arr[0];
  for(int i=0;i<n;i++){
    res^=arr[i];
  }
  return res;
}
int main(){
  int arr[5]={1,2,4,3};
  int n=sizeof(arr)/sizeof(int);
  cout<<findMissing(arr,n);
  return 0;
}