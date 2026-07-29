#include<iostream>
using namespace std;

int NaturalNumSum(int n){
  if(n==1){
    return 1;
  }
  return n+NaturalNumSum(n-1);
}
int main(){
  cout<<NaturalNumSum(6);
  return 0;
}