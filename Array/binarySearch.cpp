#include<iostream>
using namespace std;
int binarySearrch(int arr[],int n,int key){//tc = o(log n)
  int st =0, end = n-1;
  while(st<=end){
    int mid = (st+end)/2;
    if(arr[mid]==key){
      return mid;
    } else if(arr[mid]<key){
      st=mid+1;
    }else{
      end=mid-1;
    }
  }
  return -1;
}
int main(){
  int arr[6]={2,3,5,6,7,8};
  int n =sizeof(arr)/sizeof(int);
  cout << binarySearrch(arr,n,20) <<endl;
  return 0;
}