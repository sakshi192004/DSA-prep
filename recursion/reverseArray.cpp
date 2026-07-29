#include<iostream>
using namespace std;
//two pointer recursion
void reverse(int arr[],int st, int en){
  if(st>en){
    return;
  }
  swap(arr[st],arr[en]);
  reverse(arr,st+1,en-1);
}
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(int);
  reverse(arr,0,n-1);
  print(arr,n);
  return 0;
}