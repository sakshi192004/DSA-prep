#include<iostream>
using namespace std;
int main(){
  int arr[]={-10, -4, -30};
  int n = sizeof(arr)/sizeof(int);
  cout<<"array size is : "<<n<<endl;
  int min = arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  cout<<"Min is : "<<min;
  return 0;
}