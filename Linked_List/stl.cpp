#include<iostream>
#include<list>
#include<iterator>
using namespace std;


void printLL(list<int>ll){
list<int>::iterator itr;
  for(itr=ll.begin();itr!=ll.end();itr++){
    cout<<*itr<<"->";
  }
  
  cout<<"NULL\n";
}

int main(){
  list<int>ll;
  ll.push_back(3);
  ll.push_back(4);
  ll.push_back(5);
  ll.push_front(2);
  ll.push_front(1);
  ll.push_front(9);
  ll.pop_front();
  printLL(ll);
  cout<<ll.size()<<"\n";
  cout<<ll.front()<<"\n";
  cout<<ll.back()<<"\n";
  return 0;
}
