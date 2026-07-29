#include<iostream>
using namespace std;

void findSubarray(int arr[],int n){
  for(int st=0;st<n;st++){
    for(int end=st;end<n;end++){
      for(int i=st;i<=end;i++){
        cout<<arr[i];
       
      }
     cout<<",";
    }
    cout<<endl;
  }
}

int main(){
  int arr[5]={1,2,3,4,5};
  int n = sizeof(arr)/sizeof(int);
  findSubarray(arr,n);
  return 0;
}