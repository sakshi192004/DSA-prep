#include<iostream>
using namespace std;

int countVowel(string str,int n){
  int count=0;
  for(int i=0;i<n;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
      count++;
    }
  }
  return count;
}


int main(){
  string str="surbhi sakshi";
  int n= str.length();
  cout<<countVowel(str,n);
  return 0;
}