#include<iostream>
using namespace std;
int main(){
  int arr[]={-10, -4, -30};
  int n = sizeof(arr)/sizeof(int);
  cout<<n<<endl;
  int max = arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<"Max is : "<<max;
  return 0;
}