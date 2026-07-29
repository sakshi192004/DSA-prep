#include<iostream>
using namespace std;
int searchPosition(int arr[],int n, int x){
    int low= 0;
    int high= n-1;
    int ans=0;
    while(low<=high){
      int mid= (low+high)/2;
      if(arr[mid]>=x){
        ans=mid;
        high= mid-1;
      }else{
        low=mid+1;
      }
    }
    return ans;
}
int main(){
  int arr[4]={1,2,4,7};
  int n = sizeof(arr)/sizeof(int);
  cout<<searchPosition(arr,n,6);
  return 0;
}