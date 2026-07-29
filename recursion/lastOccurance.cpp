#include<iostream>
#include<vector>
using namespace std;
int lastOccur(vector<int>arr,int i,int target){
    if(i==arr.size()){
      return -1;
    }
    int idx = lastOccur(arr,i+1,target);
    if(idx==-1 && arr[i]==target){
      return i;
    }

   return idx;
}
int main(){
  vector<int>arr={1,2,3,3,3,5,6};
  cout<<lastOccur(arr,0,3);
  return 0;
}