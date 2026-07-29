#include <iostream>
#include <vector>
using namespace std;
vector<int> productOfArrayExceptSelf(vector<int>nums)
{
  vector<int>ans(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            int p=1;
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                    p*=nums[j];
                }
            }
            ans[i]=p;
        }

        for(int i=0;i<ans.size();i++){
          cout<<ans[i]<<" ";
        }
        return ans;  
}

int main()
{
  vector<int>nums= {1, 2, 3, 4}; // 24,12,8,6
  productOfArrayExceptSelf(nums);
 
  return 0;
}