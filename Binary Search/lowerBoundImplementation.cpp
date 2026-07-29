//lower bownd= smallest index such that arr[ind]>=x
#include<iostream>
using namespace std;
int lowerBound(int arr[],int n, int x){
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
  int arr[5]={3,5,8,19};
  int n = sizeof(arr)/sizeof(int);
  cout<<lowerBound(arr,n,8);
  return 0;
}