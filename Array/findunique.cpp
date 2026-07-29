#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n)
{
   int ans=0;
   for(int i=0; i<n;i++){
    ans=ans^arr[i];
   }
   return ans;
  
}

int main()
{
  int n = 11;
  int arr[11] = {7, 3, 2, 8, 3, 8, 2, 7, 5, 11, 5};
  
  cout<<findUnique(arr, n);

  // cout<<unique(arr,n);
  // int ans=0;
  // for(int i=0;i<7;i++){
  //   ans=ans^arr[i];
  //   cout<<ans<<endl;
  // }

  return 0;
}