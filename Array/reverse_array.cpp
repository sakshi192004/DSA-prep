#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
  for(int i=0,j=n-1;i<j;i++,j--){
    
  // int temp = arr[i];
  // arr[i]=arr[j];
  // arr[j]=temp;
  swap(arr[i],arr[j]);

  }
}
void printArr(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[5] ={5,4,3,9,2};
  int n=sizeof(arr)/sizeof(int);
  reverseArray(arr,n);
  printArr(arr,n);

  return 0;
}