#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main(){
  char word[]="madam";
  bool check=true;
  for(int i=0,j=strlen(word)-1;i<j;i++,j--){
    if(word[i]!=word[j]){
      check=false;
      break;
    }
  }
  if(check){
     cout<<"valid palindrome"<<endl;
  }else{
    cout<<"not valid palindrome"<<endl;
  }
 
  return 0;
}