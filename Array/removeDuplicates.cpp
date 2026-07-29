#include<iostream>
#include<set>
using namespace std;

int removeDuplicates(int arr[],int n){//return size of array after removing duplicate tc=O(n)and sc=O(n);
  set<int>s;
  for(int i=0;i<n;i++){
    s.insert(arr[i]);
  }
 
  return s.size();
}

// int removeDuplicates(int arr[],int n){//return size of array after removing duplicate tc=O(n)and sc=o(1);
//   if(n==0){
//     return 0;
//   }
//   int i=0;
//   for(int j=1;j<n;j++){
//     if(arr[j]!=arr[i]){
//       i++;
//     }
//     arr[i]=arr[j];
//   }
//   return i+1;
// }
int main(){
  int arr[10]={1,1,1,2,2,3,3,4,6,8};  //{1,2,3,4,6,8}--output
  int n=sizeof(arr)/sizeof(int);
  cout<<removeDuplicates(arr,n);
  return 0;
}