#include<iostream>
#include<algorithm>
using namespace std;

void printArr(int arr[],int n){//o(n2)
  for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
  }
 }
int main(){
  int arr[8]={1,4,1,3,2,4,3,7};
 int n = sizeof(arr)/sizeof(int);
    sort(arr,(arr+n));
    printArr(arr,n);

  return 0;
}