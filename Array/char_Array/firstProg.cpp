#include<iostream>
#include<string.h>
using namespace std;
int main(){
  // char arr[5]={'c','o','d','e','\0'};
  // cout<<arr <<endl;//output:- code
  // "apna college"//string literals
  // "helloworld"//string literals
  // "a"//string literals
   // Creation and output----------------------------
 
  //  char work[]="code";
  //  char work[5]= "code";
  //  char work[] = {'c','o','d','e','\0'};
  //  char work[50] = {'c','o','d','e','s','\0'};
  //  cout<< strlen(work);
  // char word[30];
  // cin>>word;//it can't take word after space
  // cout<<"your word was : "<<word<<endl;
  // cout<<strlen(word);
  char sentence[30];
  cin.getline(sentence,30,'*');//third argument is optional-----it is a delimitor
  cout<<"your word was : "<<sentence<<endl;
  cout<<strlen(sentence);
  
   return 0;
  
   
 

}