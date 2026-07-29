#include<iostream>
#include<algorithm>
using namespace std;
bool findDuplicate(int arr[],int n){
  // for(int i=0;i<n;i++){
  //   for(int j=i+1;j<n;j++){
  //     if(arr[i]==arr[j]){
  //       return true;
  //     }
  //   }
  // }
  sort(arr,arr+n);//tc=o(nlogn)
  for(int i=1;i<n;i++){
    if(arr[i]==arr[i-1]){
      return true;
    }
  }
  return false;
}
int main(){
int arr[5]={1,2,3,4,1};
int n = sizeof(arr)/sizeof(int);
cout<<findDuplicate(arr,n);
  return 0;
}