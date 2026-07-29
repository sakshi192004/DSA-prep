#include<iostream>
using namespace std;

void pairSum(int arr[],int n,int target){
  int l=0;
  int r=n-1;
 while(l<r){
  int sum =arr[l]+arr[r];
  if(sum==target){
    cout<<l+1<<" "<<r+1;
    return;
  } 
  else if(sum<target){
    l++;
  } 
  else{
    r--;
  }
 }
}
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
 }
int main(){
  int nums[4]={2,7,11,15};
  int target = 9;
  int n = sizeof(nums)/sizeof(int);
  pairSum(nums,n,target);
  return 0;
}