#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){//tc = O(n2)
  for(int i=n-1;i>=0;i--){
    for(int j=0;j<i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
void printArr(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[5]={8,3,6,4,1};
  int n= sizeof(arr)/sizeof(int);
  cout<<"unsorted------"<<endl;
  printArr(arr,n);
  bubbleSort(arr,n);
   cout<<"\nsorted------"<<endl;
  printArr(arr,n);
  // cout<<n;
  return 0;
}