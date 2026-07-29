#include<iostream>
using namespace std;
void sort0s1s2s(int arr[],int n){// three pointer-- Dutch national flag problem
  int low=0;
  int mid= 0;
  int hig=n-1;
  while(mid<=hig){
    if(arr[mid]==0){
      swap(arr[mid],arr[low]);
      mid++;
      low++;
    }else if(arr[mid]==1){
      mid++;
    }else{
      swap(arr[mid],arr[hig]);
      hig--;
    }
  }
 
}
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
 }
int main(){
  int arr[6]={2,0,1,1,1,0};
  int n=sizeof(arr)/sizeof(int);
  sort0s1s2s(arr,n);
  print(arr,n);
  return 0;
}