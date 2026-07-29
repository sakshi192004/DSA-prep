#include<iostream>
#include<string.h>
using namespace std;
int main(){
  char word[]="ApPle";
  for(int i=0;i<5;i++){
      int pos;
   if(word[i]>=97){
     pos=word[i]-'a';
    }
    
    word[i]=pos+'A';
  }
  cout<<word;
  return 0;
}