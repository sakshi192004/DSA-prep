#include<iostream>
using namespace std;
int power(int a,int n){
  if(n==0){
    return 1;
  }
  if(n%2==0){
    return power(a,n/2)*power(a,n/2);
  }else{
    return power(a,n/2)*power(a,n/2)*a;
  }
  return 0;
}
int main(){
  int a,n;
  cout<<"enter a : ";
  cin>>a;
  cout<<"enter power :";
  cin>>n;
  cout<<power(a,n);
return 0;
}