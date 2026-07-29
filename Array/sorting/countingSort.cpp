#include<iostream>
using namespace std;
void printArr(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
  }
 }
 void countSort(int arr[],int n){
  int freq[100000];
  int minVal= INT8_MAX , maxVal = INT8_MIN;
  for(int i=0;i<n;i++){
    minVal = min(minVal,arr[i]);
    maxVal = max(maxVal,arr[i]);
  }
  //1st step
  for(int i=0;i<n;i++){ //o(n)
    freq[arr[i]]++;
  }
  //2nd step
  for(int i=minVal,j=0;i<=maxVal;i++){ //o(range)-----range=(max-min)
    while(freq[i]>0){
        arr[j]=i;
        j++;
        freq[i]--;
    }
  }
 }
int main(){
  int arr[8]={1,4,1,3,2,4,3,7};
 int n = sizeof(arr)/sizeof(int);
 countSort(arr,n);
 printArr(arr,n);
  return 0;
}