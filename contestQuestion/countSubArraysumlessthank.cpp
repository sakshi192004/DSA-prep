// Q3. Count Subarrays With Cost Less Than or Equal to K
// Medium
// 5 pt.
// You are given an integer array nums, and an integer k.

// For any subarray nums[l..r], define its cost as:

// cost = (max(nums[l..r]) - min(nums[l..r])) * (r - l + 1).

// Return an integer denoting the number of subarrays of nums whose cost is less than or equal to k.

// Example 1:

// Input: nums = [1,3,2], k = 4

// Output: 5

// Explanation:

// We consider all subarrays of nums:

// nums[0..0]: cost = (1 - 1) * 1 = 0
// nums[0..1]: cost = (3 - 1) * 2 = 4
// nums[0..2]: cost = (3 - 1) * 3 = 6
// nums[1..1]: cost = (3 - 3) * 1 = 0
// nums[1..2]: cost = (3 - 2) * 2 = 2
// nums[2..2]: cost = (2 - 2) * 1 = 0
// There are 5 subarrays whose cost is less than or equal to 4.

// Example 2:

// Input: nums = [5,5,5,5], k = 0

// Output: 10

// Explanation:

// For any subarray of nums, the maximum and minimum values are the same, so the cost is always 0.

// As a result, every subarray of nums has cost less than or equal to 0.

// For an array of length 4, the total number of subarrays is (4 * 5) / 2 = 10.

// Example 3:

// Input: nums = [1,2,3], k = 0

// Output: 3

// Explanation:

// The only subarrays of nums with cost 0 are the single-element subarrays, and there are 3 of them.

// Constraints:

// 1 <= nums.length <= 105
// 1 <= nums[i] <= 109
// 0 <= k <= 1015

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int subArrayCountLessk(int arr[], int n, int k)
{
  int cnt = 0;

  for (int st = 0; st < n; st++)
  {
    for (int ed = st; ed < n; ed++)
    {

      int l = st, r = ed;
      int maxi = INT8_MIN;
      int mini = INT8_MAX;

      for (int j = st; j <= ed; j++)
      {

        maxi = max(maxi, arr[j]);
        mini = min(mini, arr[j]);
      }
      int cost = (maxi - mini) * (r - l + 1);
      if (cost <= k)
      {
        cnt++;
      }
    }
  }
  return cnt;
}
int main()
{
  int nums[] = {1, 2, 3};
  int k = 4;
  int n = sizeof(nums) / sizeof(int);
  cout << subArrayCountLessk(nums, n, k);
  return 0;
}