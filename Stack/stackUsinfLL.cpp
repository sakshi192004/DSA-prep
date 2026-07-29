#include<iostream>
#include<list>
using namespace std;
// template<class T>
// class Stack{
//   list<T> ll;
//   public:
//   void push(T val){
//     ll.push_front(val);
//   }
//   void pop(){
//     ll.pop_front();
//   }
//   T top(){
//     return ll.front();
//   }
//   bool isEmpty(){
//     return ll.size()==0;
//   }
// };

template<class T>
class Node{
  public:
  T data;
  Node* next;
  Node(T val){
    data= val;
    next=NULL;
  }
};
template<class T>
class Stack{
  public:
  Node<T>* head;
  Stack(){
    head==NULL;
  }
  void push(T val){
    Node<T>* newNode = new Node<T>(val);
    if(head==NULL){
      head=newNode;
    }else{
      newNode->next=head;
      head=newNode;
    }
    
  }
  void pop(){
    Node<T>* temp = head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }

  T top(){
    return head->data;
  }

  bool isEmpty(){
    return head==NULL;
  }

};

int main(){
  Stack<int>s;
  s.push(3);
  s.push(9);
  s.push(6);
  s.push(10);
  s.push(11);
  s.push(2);
  
  while(!s.isEmpty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  return 0;
}
