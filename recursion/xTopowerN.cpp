#include<iostream>
using namespace std;
int pow(int x, int n){
  if(n==0){
    return 1;
  }
  int halfPov = pow(x,n/2);
  int halfpowSquare = halfPov*halfPov;
  if(n%2!=0){
    return x * halfpowSquare;
  }
  return halfpowSquare;
}
int main(){
  cout<<pow(2,10);
  return 0;
}