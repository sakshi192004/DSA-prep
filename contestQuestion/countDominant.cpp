#include<iostream>
#include<vector>
using namespace std;
int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int dominantCount=0;
        for(int i = 0;i<n-1;i++){
            int sum = 0;
            int cnt=0;
            for(int j=i+1;j<=n-1;j++){
                cnt++;
                sum+=nums[j];
            }
            int avg = sum/cnt;
            if(nums[i]>avg){
                dominantCount++;
            }
        }
      return dominantCount;  
    }
int main(){
vector<int>nums={4,1,2};//4,1,2 and 5,4,3
cout<<dominantIndices(nums);
  return 0;
}