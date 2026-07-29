#include<iostream>
#include<string.h>
using namespace std;
int main(){
  char word[]="code";
  for(int i=0,j=strlen(word)-1;i<j;i++,j--){
    swap(word[i],word[j]);
  }
  cout<<word;
  return 0;
}