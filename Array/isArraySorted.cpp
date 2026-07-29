#include<iostream>
using namespace std;
bool isArraySorted(int arr[],int n){
  bool flag=true;
  for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
      flag=false;
    }
  }
  return flag;
}
int main(){
  int arr[5]={1,2,3,6,5};
  int n = sizeof(arr)/sizeof(int);
  cout<<isArraySorted(arr,n);
  return 0;
}