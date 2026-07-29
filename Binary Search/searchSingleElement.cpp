// Problem Statement: Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.

// Examples
// Input : arr[] = {1,1,2,2,3,3,4,5,5,6,6}
// Output: 4
// Explanation: Only the number 4 appears once in the array.

// Input: arr[] = {1,1,3,5,5}
// Output : 3
// Explanation: Only the number 3 appears once in the array.
#include <iostream>
using namespace std;
// int searchSingleEl(int arr[],int n){
//   int el=arr[0];
//   int i=0;
//   while(i<n){
//     if(arr[i]==arr[i+1]){
//       i=i+2;
//     }else{
//       return arr[i];
//     }
//   }
//   return -1;
// }

int searchSingleEl(int arr[], int n)
{
  if (n == 0)
  {
    return arr[0];
  }
  if (arr[0] != arr[1])
  {
    return arr[0];
  }
  if (arr[n - 1] != arr[n - 2])
  {
    return arr[n - 1];
  }
  int i = 1;
  int j = n - 2;
  while (i <= j)
  {
    int mid = (i + j) / 2;
    if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
    {
      return arr[mid];
    }
    if ((mid %2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
    {
      i = mid + 1;
    }
    else{
      j=mid-1;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
  int n = sizeof(arr) / sizeof(int);
  cout << searchSingleEl(arr, n);
  return 0;
}