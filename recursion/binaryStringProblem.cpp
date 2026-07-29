#include<iostream>
using namespace std;
void binStringProblem(int n,int lastplace,string ans){
  if(n==0){
    cout<<ans<<endl;
    return;
  }
  if(lastplace!=1){
    binStringProblem(n-1,0,ans+'0');
    binStringProblem(n-1,1,ans+'1');
  }else{
     binStringProblem(n-1,0,ans+'0');
  }

}
int main(){
  int n =4;
  string ans="";
  binStringProblem(n,0,ans);
  return 0;
}