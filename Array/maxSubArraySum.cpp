#include<iostream>
using namespace std;

void maxSubArraySum(int *arr,int n){//o (n3)
  int maxSum = INT8_MIN;
  for(int st=0;st<n;st++){
    for(int end=st;end<n;end++){
      int currSum =0;
      for(int i=st;i<=end;i++){
        currSum+=arr[i];
      
      }
    maxSum = max(maxSum,currSum);
    }
    // cout<<endl;
  }
  cout<<maxSum;
}

void maxSubArraySum2(int *arr,int n){ // o(n2)
  int maxSum = INT8_MIN;
  for(int st=0;st<n;st++){
    int currSum =0;
    for(int end=st;end<n;end++){
      currSum+=arr[end];
       
    }
    maxSum = max(maxSum,currSum);
    // cout<<endl;
  }
  cout<<maxSum;
}
// using kadan's algorithm---------------------
void maxSubArraySum3(int *arr,int n){ // o(n2)
  int maxSum = INT8_MIN;
  int currSum=0;
  for(int i=0;i<n;i++){
    currSum+=arr[i];
    maxSum = max(maxSum,currSum);
    if(currSum<0){
      currSum=0;
    }
  }
  cout<<maxSum;
   
}

int main(){

int arr[6]={2,-3,6,-5,4,2};
int n = sizeof(arr)/sizeof(int);
maxSubArraySum3(arr,n);

  return 0;
}