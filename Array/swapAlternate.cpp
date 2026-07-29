#include <bits/stdc++.h>
using namespace std;

void swapalt(int arr[], int n)
{
  
  for (int i = 0; i < n; i += 2)
  {
    
    if(i+1<n){

      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;

      
      // swap(arr[i],arr[i+1]);
      
    }
   
    
    
  }
}
int main()
{

  int arr[8] = {2, 4, 5, 6, 8,9,5,7};
  swapalt(arr,8);

  for (int i = 0; i < 8; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}