#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    
    cout<<arr[i] << " ";
  }
}

  void inputArray(int arr[], int n){
  
    for (int i = 0; i < n; i++)
    {
      
      cin>>arr[i];
    }
  }
  

  int main()
  {
    int arr[5] = {2, 4, 5, 7, 8};
    inputArray(arr, 5);
    printArray(arr, 5);
    return 0;
  }