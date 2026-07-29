//LeetCode - 3982
//------------------contest problem------------------------
// You are given an integer array nums.

// The digit range of an integer is defined as the difference between its largest digit and smallest digit.

// For example, the digit range of 5724 is 7 - 2 = 5.

// Return the sum of all integers in nums whose digit range is equal to the maximum digit range among all integers in the array.

 

// Example 1:

// Input: nums = [5724,111,350]

// Output: 6074

// Explanation:

// i	nums[i]	Largest	Smallest	Digit Range
// 0	5724	7	2	5
// 1	111	1	1	0
// 2	350	5	0	5
// The maximum digit range is 5. The integers with this digit range are 5724 and 350, so the answer is 5724 + 350 = 6074.

// Example 2:

// Input: nums = [90,900]

// Output: 990

// Explanation:

// i	nums[i]	Largest	Smallest	Digit Range
// 0	90	9	0	9
// 1	900	9	0	9
// The maximum digit range is 9. Both integers have this digit range, so the answer is 90 + 900 = 990.

 

// Constraints:

// 1 <= nums.length <= 100
// 10 <= nums[i] <= 105










#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 int maxDigitRange(vector<int>& nums) {
         int sum=0;
        vector<int>range;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            int Max=INT8_MIN,Min=INT8_MAX;
            int digRange;
            int dig=nums[i];
            while(dig!=0){
                Max=max(Max,dig%10);
                Min=min(Min,dig%10);
                dig=dig/10;
                cout<<dig<<endl;
                
            }
               digRange=Max-Min;
                range.push_back(digRange);
               
            
                
            
        }
        // int el;
        // unordered_map<int,int>m;
        // for(int num : range){
        //     m[num]++;
        // }
        // for(auto val : m){
        //     if(val.second>1){
        //         el=val.first;
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(range[i]==el){
        //         sum+=nums[i];
        //     }
        // }
       // for(int i=0;i<n;i++){
       //  cout<<range[i];
       // }
       // cout<<endl;
       
        int largest=range[0];
           int idx;
           for(int i=1;i<n;i++){
               largest=max(largest,range[i]);
           }
           for(int i=0;i<n;i++){
               if(range[i]==largest){
                   sum+=nums[i];
               }
           }
           // return nums[idx];
       
        return sum;
    }
int main(){
  vector<int>nums={76207,65921};
  cout<<maxDigitRange(nums);
  return 0;
}