#include<iostream>
using namespace std;

//idea: pick the smallest (from unsorted) & put in the beginning.
void selectionSort(int arr[],int n){ // o(n2)
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
      }
    }
  }
}
 void printArr(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
  }
 }
int main(){
  int arr[5]={5,4,1,3,2};
 int n = sizeof(arr)/sizeof(int);
 selectionSort(arr,n);
 printArr(arr,n);
  return 0;
}