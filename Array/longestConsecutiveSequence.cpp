// Given an array nums of n integers.

// Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.

// Examples
// Example 1:
// Input:
//  nums = [100, 4, 200, 1, 3, 2]  
// Output:
//  4  
// Explanation:
//  The longest sequence of consecutive elements in the array is [1, 2, 3, 4], which has a length of 4. This sequence can be formed regardless of the initial order of the elements in the array.

// Example 2:
// Input:
//  nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]  
// Output:
//  9  
// Explanation:
//  The longest sequence of consecutive elements in the array is [0, 1, 2, 3, 4, 5, 6, 7, 8], which has a length of 9.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int longestConsecutiveSequence(vector<int>& arr){//n log n- does not pass all the test cases
  int n = arr.size();
  int len=0;
  int min=INT8_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  int el=min;
  sort(arr.begin(),arr.end());
  int i=0;
  while(i<n){
    if(len==0){
      len++;
    }else if(arr[i]==el+1){
      len++;
      el=arr[i];
       i++;
    }else{
      i++;
    }
    
  }
return len;

}

int longestConsecutiveSequence(vector<int>& arr){//better
  sort(arr.begin(),arr.end());
  int longest =1;
  int currcnt=0;
  int lastSmaller = INT8_MIN;
  for(int i=0;i<arr.size();i++){
    if(arr[i]-1==lastSmaller){
      currcnt= currcnt+1;
      lastSmaller=arr[i];
    }else if(arr[i]-1 != lastSmaller){
      currcnt=1;
      lastSmaller=arr[i];
    }
    longest= max(currcnt,longest);
  }
  return longest;
  
}
int longestConsecutiveSequence(vector<int>& arr){//better
  sort(arr.begin(),arr.end());
  int longest =1;
  int currcnt=0;
  int lastSmaller = INT8_MIN;
  for(int i=0;i<arr.size();i++){
    if(arr[i]-1==lastSmaller){
      currcnt= currcnt+1;
      lastSmaller=arr[i];
    }else if(arr[i]-1 != lastSmaller){
      currcnt=1;
      lastSmaller=arr[i];
    }
    longest= max(currcnt,longest);
  }
  return longest;
  
}



int main(){
  vector<int>arr={100, 4, 200, 1, 3, 2};
  cout<<longestConsecutiveSequence(arr);
  return 0;
}