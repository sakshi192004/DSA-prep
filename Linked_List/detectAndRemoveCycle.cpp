#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  
  Node(int val){
    data= val;
    next=NULL;
  }
  ~Node(){
    if(next!=NULL){
      delete next;
      next =NULL;
    }
  }
};
class List{
  public:
  Node* head;
  Node* tail;
  public:
  List(){
    head=NULL;
    tail=NULL;
  }

  ~List(){
    if(head!=NULL){
      delete head;
      head=NULL;
    }
  }

  void push_front(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
      head=tail=newNode;
    }else{
      newNode->next =head;
      head=newNode;
    }
  }
  void push_back(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
      head = tail = newNode;
    }else{
      tail->next =newNode;
      tail = newNode;
    }
  }
};

 void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
      cout<<temp->data<<" -> ";
      temp = temp->next;
    }
    cout<<"NULL\n";
  }
  bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL&&fast->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;

      if(slow==fast){
        cout<<"cycle is found\n";
        return true;
      }
      
    }
    cout<<"cycle is not find";
    return -1;
  }

  void removeCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    bool isCycle = false;
    while(fast!=NULL && fast->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;
      if(slow==fast){
        cout<<"cycle Exist\n";
        isCycle = true;
        break;
      }
    }
    if(!isCycle){
      cout<<"cycle doesn't exist\n";
      return;
    }
    slow=head;
    if(slow==fast){
      while(fast->next!=slow){
        fast=fast->next;
      }
        fast->next=NULL;
    }else{
      Node* prev=fast;
      while(slow!=fast){
        slow=slow->next;
        prev=fast;
        fast=fast->next;
      }
      prev->next=NULL;

    }
  }

  int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next=ll.head;
    // isCycle(ll.head);
    removeCycle(ll.head);
    printLL(ll.head);
    return 0;
  }