// Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k. A subarray is a contiguous non-empty sequence of elements within an array.

// Examples
// Input : N = 4, array[] = {3, 1, 2, 4}, k = 6
// Output: 2
// Explanation: The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].

// Input: N = 3, array[] = {1,2,3}, k = 3
// Output: 2
// Explanation: The subarrays that sum up to 3 are [1, 2], and [3].

#include <iostream>
using namespace std;
// int countSumEqualsK(int arr[], int n, int k)
// {
//   int cnt = 0;
//   for (int st = 0; st < n; st++)
//   {
//     for (int end = st; end < n; end++)
//     {
      
//       int sum = 0;
//       for (int j = st; j <= end; j++)
//       {
//         sum += arr[j];
//       }
//       if (sum == k)
//       {
//         cnt++;
//       }
//     }
//   }
//   return cnt;
// }

int countSumEqualsK(int arr[], int n, int k)
{
  int cnt=0;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum==k){
      cnt++;
    }
    // if(arr[i]<0){
    //   sum=0;
    // }
  }
  
  return cnt;
}
int main()
{
  int arr[3] = {1,2,3};
  int n = sizeof(arr) / sizeof(int);
  cout << countSumEqualsK(arr, n, 3);
  return 0;
} 