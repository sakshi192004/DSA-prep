//count total ways to tile a floor 2xn with tile 2x1
#include<iostream>
using namespace std;
int tilingProblem(int n){
  if(n==0 || n==1){
    return 1;
  }
  //vertical
  int ans1 = tilingProblem(n-1);
  //horizontal
  int ans2 = tilingProblem(n-2);
  return ans1+ans2;
}
int main(){
  int n =5;
  cout<<tilingProblem(n);
  return 0;
}