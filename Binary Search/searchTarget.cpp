#include<iostream>
using namespace std;
int search(int arr[],int n,int target){
  int low = 0;
  int high = n-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]>target){
      high=mid-1;
    }else{
      low=mid+1;
    }
  }
}
int main(){
  int arr[8]={3,6,8,11,15,17,18,19};
  int n=sizeof(arr)/sizeof(int);
  cout<<search(arr,n,8);
  return 0;
}