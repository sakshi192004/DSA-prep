// Example 1:
// Input:
//  arr = [4, 7, 1, 0]  
// Output:
//  7 1 0  
// Explanation:
//  The rightmost element (0) is always a leader.  
// 7 and 1 are greater than the elements to their right, making them leaders as well.

// Example 2:
// Input:
//  arr = [10, 22, 12, 3, 0, 6]  
// Output:
//  22 12 6  
// Explanation:
//  6 is a leader because there are no elements after it.  
// 12 is greater than all the elements to its right (3, 0, 6), and 22 is greater than 12, 3, 0, 6, making them leaders as well.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// vector<int>leadersInArray(vector<int>& arr){//bruteForce
//   vector<int>ans;
//   int n = arr.size();
  
//   for(int i=0;i<n;i++){
//     bool leader = true;
//     for(int j=i+1;j<n;j++){
//       if(arr[j]>arr[i]){
//         leader=false;
//         break;
//       }
//     }
//     if(leader==true){
//       ans.push_back(arr[i]);
//     }
//   }
//   for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//   }
// return ans;
// }
vector<int>leadersInArray(vector<int>& arr){//optimal
  vector<int>ans;
  int n = arr.size();
  int maxi=INT8_MIN;
  for(int i=n-1;i>=0;i--){
    if(arr[i]>maxi){
      ans.push_back(arr[i]);
    }
    maxi=max(maxi,arr[i]);
  }
  // sort(ans.begin(),ans.end());if not sorted;
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
return ans;
}
int main(){
 vector<int>arr={10, 22, 12, 3, 0, 6};
  leadersInArray(arr);
  return 0;
}