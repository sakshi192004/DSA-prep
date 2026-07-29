#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int validSubStr(string str){
  int  n = str.size();
 
  if(n<=1){
    return n;
  }
   int count=0;
  if(str[0]==str[n-1]){
    count++;
  }
  count+=validSubStr(str.substr(0,n-1));
  count+=validSubStr(str.substr(1));
  count-=validSubStr(str.substr(1,n-2));
  return count;
  
}
int main(){
  string str ="abcab";
  int count = validSubStr(str);
  cout<<count;
  return 0;
}