#include<iostream>
using namespace std;
 void reverse(int arr[],int st,int en){
  for(int i =st,j=en;i<j;i++,j--){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
 }
 void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
 }
int main(){
  int nums[7] = {1,2,3,4,5,6,7};
  int k =3;
  int n = sizeof(nums)/sizeof(int);
  int s = k%n;//k'(k%n)
  reverse(nums,0,n-s-1);
  reverse(nums,n-s,n-1);
  reverse(nums,0,n-1);
  print(nums,n);

  return 0;
}