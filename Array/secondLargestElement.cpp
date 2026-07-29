#include<iostream>
using namespace std;

int secondLargestElement(int arr[],int n){
  int max = INT8_MIN;
  int sMax=INT8_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  for(int i=0;i<n;i++){
    if(arr[i]!=max&&sMax<arr[i]){
      sMax=arr[i];
    }
  }

  return sMax;
}
int main(){
  int arr[6]={2,3,6,5,4,7};
  int n=sizeof(arr)/sizeof(int);
  cout<<secondLargestElement(arr,n);
  return 0;
}