#include<iostream>
using namespace std;
int linearSearch(int arr[], int n,int key){//tc = o(n) (liner time complexity)
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;

}
int main(){
  int arr [] = {2,4,6,8,10,12,14,16};
  int n = sizeof(arr)/sizeof(int);
  cout<< linearSearch(arr,n,8);
  return 0;
}