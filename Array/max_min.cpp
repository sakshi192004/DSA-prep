#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int maxNum(int num[], int n)
{
  int maxi = INT8_MIN;
  for (int i = 0; i < n; i++)

  maxi =max(maxi,num[i]);
  {
  //   if (num[i] > max)
  //   {
  //     max = num[i];
  //   }
  }
  return maxi;
}
int minNum(int num[], int n)
{
  int mini = INT8_MAX;
  for (int i = 0; i < n; i++)
  {
    mini = min(mini,num[i]);
    // if (num[i] < min)
    // {
    //   min = num[i];
    // }
  }
  return mini;
}
int main()
{
  // int size;
  // cout << "enter size :";
  // cin >> size;
  int num[8] = {-2, -54, -4, -8, -9,8,9,5};
  cout << "maximaum value is" << maxNum(num, 8) << endl;
  cout << "minimum value is" << minNum(num, 8) << endl;

  return 0;
}