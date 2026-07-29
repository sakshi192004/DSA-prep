// upper bound = smallest index such that arr[ind]>x
#include<iostream>
using namespace std;
int upperBound(int arr[],int n,int x){
  int low= 0;
    int high= n-1;
    int ans=0;
    while(low<=high){
      int mid= (low+high)/2;
      if(arr[mid]>x){
        ans=mid;
        high= mid-1;
      }else{
        low=mid+1;
      }
    }
    return ans;

}
int main(){
  int arr[10]={2,3,6,7,8,8,11,11,11,12};
  int n = sizeof(arr)/sizeof(int);
  cout<<upperBound(arr,n,11);
  return 0;
}