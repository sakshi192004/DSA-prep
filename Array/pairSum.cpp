#include <iostream>
#include <vector>
using namespace std;
// vector<int>pairSum(vector<int>arr,int target){
//   vector<int>ans;
//   int n = arr.size();
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//       if(arr[i]+arr[j]==target){
//         ans.push_back(i);
//         ans.push_back(j);
//       }
//     }
//   }
//   for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//   }
//   return ans;
// }
 
vector<int>pairSum(vector<int> &arr, int target)
{
  vector<int> ans;
  int n = arr.size();
  int low = 0;
  int high = n - 1;
    while(low < high)
  {
    if((arr[low] + arr[high])>target)
    {
      high--;
    }
    else if ((arr[low] + arr[high]) < target)
    {
      low++;
    }
    else
    {
      ans.push_back(low);
      ans.push_back(high);
      break;
    }
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  return ans;
}
int main()
{
  vector<int> vec = {2, 7, 11, 15};
  pairSum(vec, 9);
  return 0;
}