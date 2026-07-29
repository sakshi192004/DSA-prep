// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
// The input is generated such that a majority element will exist in the array.
 

// Follow-up: Could you solve the problem in linear time and in O(1) space?
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>&nums){
  int cnt=0;
  int el;
  if(nums.size()==1){
    return nums[0];
  }
  for(int i=0;i<nums.size();i++){
    if(cnt==0){
      cnt++;
      el=nums[i];
    }else if(nums[i]==el){
      cnt++;
    }else{
      cnt--;
    }
  }
  int cnt1=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i]==el){
      cnt1++;
    }
    if(cnt1>=nums.size()/2){
      return el;
    }
  }
  return -1;
}
int main(){
  vector<int>nums={3,2,3};
  cout<<majorityElement(nums);
  return 0;
}