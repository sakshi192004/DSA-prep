// Problem Statement: Given an integer array nums of size n, return the majority element of the array.

// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

// Examples
// Example 1:
// Input:
//  nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
// Output:
//  7  
// Explanation:
//  The number 7 appears 5 times in the 9-sized array, making it the most frequent element.

// Example 2:
// Input:
//  nums = [1, 1, 1, 2, 1, 2]  
// Output:
//  1  
// Explanation:
//  The number 1 appears 4 times in the 6-sized array, making it the most frequent element.
#include<iostream>
using namespace std;
// int maxElementAppearsNby2times(int arr[],int n){ // BruteForce approach
  
//   for(int i=0;i<n;i++){
//     int maxCount=0;
//     for(int j=i;j<n;j++){
      
//       if(arr[j]==arr[i]){
//         maxCount++;
//       }
//     }
//     if(maxCount==(n/2)){
//       return arr[i];
//     }
//   }
//   return 0;
// }

int maxElementAppearsNby2times(int arr[],int n){ // optimal approach---moore's voting algorithm
 int cnt =0;
 int el;
 for(int i=0;i<n;i++){
  if(cnt==0){
    cnt=1;
    el=arr[i];
  }else if(arr[i]==el){
    cnt++;
  }else{
    cnt--;
  }
 }
 int cnt1;
 for(int i=0;i<n;i++){
  if(arr[i]==el){
    cnt1++;
  }
 }

 if(cnt1>n/2){
  return el;
 }
  
}

int main(){
  int nums[]= {1, 1, 1, 2, 1, 2};
  int n = sizeof(nums)/sizeof(int);
  cout<<maxElementAppearsNby2times(nums,n);
  return 0;
}