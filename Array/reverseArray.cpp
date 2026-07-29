#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
  for (int i=0,j=4; i<j ; i++, j--)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main()
{
int arr[5]={1,2,3,4,5};
reverseArray(arr,5);
for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
}
  return 0;
}