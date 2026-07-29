// Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

// Examples
// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

// Input : 1,2,0,1,0,4,0
// Output: 1,2,1,4,0,0,0
// Explanation : All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

#include<iostream>
using namespace std;
void moveZerosEnd(int arr[],int n){
  int j;
  int i;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      j=i;
      break;
    }
  }
  i=j+1;
  while(i<n){
    if(arr[i]==0){
      i++;
    }else{
      swap(arr[i],arr[j]);
      j++;
    }
  }
}
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[8]={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
  int n = sizeof(arr)/sizeof(int);
  moveZerosEnd(arr,n);
  print(arr,n);
  return 0;
}