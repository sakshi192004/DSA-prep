#include<iostream>
using namespace std;
int almostEqual(string str1,string str2){
 if(str1.length()!=str2.length()){
  return false;
 }
 int diffCount=0;
 int str1Freq[26]={0};
 int str2Freq[26]={0};
 for(int i=0;i<str1.length();i++){
    if(str1[i]!=str2[i]){
      diffCount++;
      
    }
    str1Freq[str1[i]-'a']++;
    str2Freq[str2[i]-'a']++;
 }
 if(diffCount>2){
  return false;
 }
 
 for(int i=0;i<26;i++){
   if(str1Freq[i]!=str2Freq[i]){
    return false;
  }
 }
  return true;
}
int main(){
  string str1="bank";
  string str2="kanb";
 cout<< almostEqual(str1,str2);
  return 0;
}