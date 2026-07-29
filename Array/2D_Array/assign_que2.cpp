#include<iostream>
using namespace std;
int main(){
  int r=3;
  int col=3;
  int arr[3][3]={{1,4,9},{11,4,3},{2,2,3}};
  int sum=0;
  for(int i=1;i<2;i++){
    for(int j=0;j<col;j++){
      sum+=arr[i][j];
    }
  }
  cout<<sum;
  return 0;
}