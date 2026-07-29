#include<iostream>
using namespace std;
//each friend can stay single or can be pairs once
int friendsPairingProblem(int n){
  if(n==1 || n==2){
    return n;
  }
  return friendsPairingProblem(n-1)+(n-1)*friendsPairingProblem(n-2);
}
int main(){
  int n=4;
  cout<<friendsPairingProblem(n);
  return 0;
}