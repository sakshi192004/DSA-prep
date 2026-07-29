#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr, int target){
  int n = arr.size();
  int low=0;
  int high= n-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target){
      return 1;
    }else if(arr[low]<=arr[mid]){
      if(target>=arr[low]&&target<=arr[mid]){
        high = mid;
      }else{
        low=mid+1;
      }
    }else{
      if(target>=arr[mid+1]&&target<=arr[high]){
        low= mid+1;
      }else{
        high= mid;
      }
    }
  }
  return -1;
}
int main(){
  vector<int> arr = {3,4,5,6,0,1,2};
  cout<<search(arr,8);
  return 0;
}