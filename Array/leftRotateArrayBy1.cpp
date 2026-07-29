#include<iostream>
using namespace std;
void leftRotateBy1(int arr[],int n){
  int temp = arr[0];
  for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
  }
  arr[n-1]=temp;
}
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[4]={1,2,3,4};
  int n = sizeof(arr)/sizeof(int);
  leftRotateBy1(arr,n);
  print(arr,n);
  return 0;
}