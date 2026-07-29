#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char str1[100];
  strcpy(str1,"apna");
  cout<<str1<<endl;;
  char str2[]="College";
  cout<<strcat(str1,str2);
  return 0;
}