#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool uniqueOccurrences(vector<int> arr)
{
  sort(arr.begin(), arr.end());
  vector<int> brr;
  int count =0;
  for (int i = 1; i < arr.size(); i++)
  {
    if(arr[i]==arr[i-1]){
      count++;
    } else{
      brr.push_back(count+1);
      count = 0;
    }

  }
   brr.push_back(count+1);
   sort(brr.begin(),brr.end());
   for(int i= 1;i<brr.size();i++){
    if(brr[i]==brr[i-1]){
      return false;
    }
    
   }
   return true;
}
int main()
{

  vector<int> arr= {1, 2, 2,2, 1, 1, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout<<uniqueOccurrences(arr);
  return 0;
}