// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

// Examples
// Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
// Output : [6, 7, 1, 2, 3, 4, 5]
// Explanation : rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6]
// rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5] 

// Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
// Output : [3, 4, 5, 6, 1, 2]
// Explanation :rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

#include<iostream>
using namespace std;
void reverse(int arr[],int k, int n){
  for(int i=k,j=n-1;i<j;i++,j--){
    swap(arr[i],arr[j]);
  }
}
void printArr(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[7]={1, 2, 3, 4, 5, 6, 7};
  int k=2; 
  int n=sizeof(arr)/sizeof(int);
  int r =n-(k%n)-1;
  cout<<"Right rotate------"<<endl;
  reverse(arr,r+1,n);
  reverse(arr,0,r+1);
  reverse(arr,0,n);
  printArr(arr,n);
  cout<<endl;
  cout<<"left rotate------"<<endl;
  int nums[]={1, 2, 3, 4, 5, 6};
  int m=sizeof(nums)/sizeof(int);
  int l=2;
  int s=l%m;
  reverse(nums,0,s);
  reverse(nums,s,m);
  reverse(nums,0,m);
  printArr(nums,m);

  return 0;
}