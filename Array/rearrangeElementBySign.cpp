// Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

// Examples
// Example 1:
// Input:
// arr[] = {1,2,-4,-5}, N = 4
// Output:
// 1 -4 2 -5
// Explanation: 
// Positive elements = 1,2
// Negative elements = -4,-5
// To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.




// Example 2:
// Input:
// arr[] = {1,2,-3,-1,-2,-3}, N = 6
// Output:
// 1 -3 2 -1 3 -2
// Explanation: 
// Positive elements = 1,2,3
// Negative elements = -3,-1,-2
// To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3.
// Also, -3 should come before -1, and -1 should come before -2.

#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrangeAlternatively(vector<int>arr){
  vector<int>ans;
  int brr[100000];
  int posInx=0;
  int negIdx=1;
  for(int i=0;i<arr.size();i++){
    if(arr[i]>0){
      brr[posInx]=arr[i];
      posInx+=2;
    }else{
      brr[negIdx]=arr[i];
      negIdx+=2;
    }
  }
  for(int i=0;i<arr.size();i++){
    ans.push_back(brr[i]);
  }
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  return ans;
}
int main(){
  vector<int>arr={1,2,-3,-1,-2,3};
  rearrangeAlternatively(arr);
  return 0;
}
            