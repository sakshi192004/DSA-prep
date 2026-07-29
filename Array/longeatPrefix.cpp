#include<iostream>
#include<string>
using namespace std;
string longestCommonPrefix(string str[],string ans,int n){
  for(int i=0;i<n;i++){
     string s = str[i];
    for(int j =i+1;j<n;j++){
      string map = str[j];
      for(int k=0;k<map.size();k++)
      if(map[k]==s[k]){
       ans=ans+map[k];
      }else{
        break;
      }
    }
  }
  return ans;
}
int main(){
  string strs[3] = {"flower","fly","flow"};
  int n = sizeof(strs)/sizeof(string);
  string ans ="";
  cout<<longestCommonPrefix(strs,ans,n);
  return 0;
}