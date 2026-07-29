#include<iostream>
using namespace std;

int elementSum(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++){
  sum+=arr[i];
}
return sum;

}


int main(){
  int n=5;
int arr[n];
// cout<<"enter the elements of array: ";
for(int i=0; i<n; i++){
  cout<<"enter the "<<i+1<<" element"<<endl;
  cin>>arr[i];

}
cout<<"elements are";
for(int i=0; i<n; i++){
  
 cout<<arr[i]<<" "<<endl;
  
}

cout<<"sum of element is: "<<elementSum(arr,n);


return 0;
}