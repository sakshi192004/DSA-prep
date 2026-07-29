#include<iostream>
using namespace std;
int main(){
  int arr[5]={7,4,6,5,2};
  int n = sizeof(arr)/sizeof(int);
  int min = INT8_MAX;
  for(int i=0; i<n; i++){
    if(arr[i]<min){
      min = arr[i];
    }
  }
  cout<<"minimum is :"<<min;
  return 0;
}
//passing array name is equivalent to passing pointer
//array name----> pointer
