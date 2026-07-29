//a contiguous or non contiguous which follows the order
#include<iostream>
#include<vector>
using namespace std;
void printf(int ind,vector<int>&ds,int arr[],int n){
  if(ind==n){
    for(auto it : ds){
      cout<<it<<" ";
    }
    if(ds.size()==0){
      cout<<"{}";
    }
    cout<<endl;
    return;
  }

  //do not pick element case
  printf(ind+1,ds,arr,n);
  //pick or push element
  ds.push_back(arr[ind]);
  printf(ind+1,ds,arr,n);
  ds.pop_back();
  // //do not pick element case
  // printf(ind+1,ds,arr,n);
    
}
int main(){
  int arr[]={3,1,2};
  int n = 3;
  vector<int>ds;
  printf(0,ds,arr,n);
  return 0;
}