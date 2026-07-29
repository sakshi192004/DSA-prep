#include<iostream>
using namespace std;
int main(){
  int arr[]={-5, -2, -10, -1};
  int n = sizeof(arr)/sizeof(int);
  int max = INT16_MIN;
  int secMax=INT16_MIN;
  for(int i = 0; i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  for(int i = 0; i<n;i++){
    if(arr[i]!=max && arr[i]>secMax){
      secMax= arr[i];
    }
  }
  cout<<"Max is : "<<max<<endl;
  cout<<"Second Max is : "<<secMax<<endl;
  
  return 0;
}