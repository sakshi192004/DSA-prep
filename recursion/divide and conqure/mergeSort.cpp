#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[],int si,int mid,int ei){//tc=O(nlogn),sc=O(n)
  vector<int>ans;
  int i=si;
  int j=mid+1;
  while(i<=mid&&j<=ei){
    if(arr[i]<=arr[j]){
      ans.push_back(arr[i]);
      i++;
    }else{
      ans.push_back(arr[j]);
      j++;
    }
  }
  while(i<=mid){
    ans.push_back(arr[i]);
    i++;
  }
  while(j<=ei){
    ans.push_back(arr[j]);
    j++;
  }
  for(int idx=si,x=0;idx<=ei;idx++){
    arr[idx]=ans[x];
    x++;
  }
}
void mergeSort(int arr[],int si,int ei)
{  
  if (si>=ei)
  {
    return;
  }
  int mid = (si + ei) / 2;
  mergeSort(arr,si,mid);//left
  mergeSort(arr,mid+1,ei);//right
  merge(arr,si,mid,ei);
  
}
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int arr[8] = {3, 1, 6, 4, 7, 8, 9, 2};
  int n=8;
  mergeSort(arr,0,n-1);
  print(arr,n);
  return 0;
}