#include<iostream>
using namespace std;
int main(){
  int arr[5]={5,4,3,9,2};
  int n = sizeof(arr)/sizeof(int);
  int max = INT8_MIN;
  for(int i= 0; i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<"largest is : "<<max;
  return 0;
}