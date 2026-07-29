#include<iostream>
using namespace std;
//Brute Force------------------------------------------------
// int longestSubarrayWithSum_k(int arr[],int n,int l){//tc=o(n3)
//   int maxLen=0;
//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       int count=0;
//       int sum=0;
//       for(int k=i;k<=j;k++){
//         sum+=arr[k];
//         count++;
//         if(sum==l){
//           maxLen=max(maxLen,count);
//         }
//       }
//     }
//   }
//   return maxLen;
// }
//better-------------------------------
// int longestSubarrayWithSum_k(int arr[],int n,int l){//tc=o(n2)
//   int maxLen=0;
//   for(int i=0;i<n;i++){
//     int count=0;
//       int sum=0;
//     for(int j=i;j<n;j++){
//      sum+=arr[j];
//         count++;
//         if(sum==l){
//           maxLen=max(maxLen,count);
//         }
//     }
//   }
//   if(maxLen==0){
//     return 0;
//   }
//   return maxLen;
// }
//optimal-------------------------------------
int longestSubarrayWithSum_k(int arr[],int n,int l){//tc=o(n2)
  int maxLen=0;
   int count=0;
  int Sum=0;
  int i=0;
  int j=i;
  while(j<n){
    Sum+=arr[j];
    count++;
    if(Sum==l){
      maxLen=max(maxLen,count);
      
    }else{
       i++;
       j++;
    }
    
   
  }
  return maxLen;
}
int main(){
  int arr[6]={10,5,2,7,1,9};
  int k=15;
  int n=sizeof(arr)/sizeof(int);
  cout<<longestSubarrayWithSum_k(arr,n,k);
  return 0;
}