#include<iostream>
using namespace std;
bool checkPalindrome(int arr[],int n){
  for(int i=0,j=n-1;i<j;i++,j--){
    if(arr[i]!=arr[j]){
      return false;
    }
  }
  return true;
}
int main(){
  int arr[5]={1,2,3,5,1};
  int n = sizeof(arr)/sizeof(int);
  cout<<checkPalindrome(arr,n);
  return 0;
}