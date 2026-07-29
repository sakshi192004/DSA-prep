#include<iostream>
using namespace std;

class Node{
    
    public:
      int data;
    Node* next;
    Node(int val){
      data = val;
      next=NULL;
    }

};

class List{
  Node* head;
  Node* tail;
  public:
    List(){
      head=NULL;
      tail=NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
          head=newNode;
          tail=newNode;
        }else{
        newNode->next= head;
        head=newNode;
        }
    }

    void push_back(int val){
      Node* newNode = new Node(val);
      
      // if(head==NULL){
      //   head=tail=NULL;
      // }else{
      //   tail->next=newNode;
      //   tail=newNode;
      // }
      if(head==NULL){
        head=tail=NULL;
      }else{
        Node* temp=head;
        while(temp->next!=NULL){
          temp=temp->next;
        }

        temp->next=newNode;
        tail=newNode;
      }
    }

    void insert(int val,int pos){
      Node* newNode = new Node(val);
      Node* temp=head;
      for(int i=0;i<pos-1;i++){
        if(temp==NULL){
          cout<<"Can't insert, position is Invalid\n";
          return;
        }
        temp=temp->next;
      }
      newNode->next=temp->next;
      temp->next=newNode;
    }

    void pop_front(){
      if(head==NULL){
        cout<<"list is empty\n";
      }
      Node* temp = head;
      head=head->next;
      temp->next=NULL;
      delete temp;
    }

    void pop_back(){
      
      Node* temp=head;
      while(temp->next->next!=NULL){
        temp=temp->next;
      }
      temp->next=NULL;
      delete tail;
      tail=temp;
    }

    int iterativeSearch(int val){
      Node* temp=head;
      int idx=0;
      while(temp!=NULL){
        if(temp->data==val){
          cout<<"Value found at index "<<idx<<endl;
          return idx;
        }
        idx++;
        temp=temp->next;
      }
      cout<<"value not exist\n";
      return -1;
    }

    int helper(Node* temp,int val){
      if(temp==NULL){
        return -1;
      }
      if(temp->data==val){
        return 0;
      }
      int idx = helper(temp->next,val);
      if(idx==-1){
        return -1;
      }
      return idx+1;
    }

    int searchRec(int val){
     return helper(head,val);
    }

    void printLL(){
      Node* temp = head;
      while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
      }
      cout<<"NULL"<<endl;
    }

    

};

int main(){
  List ll;
  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  // ll.printLL();
  ll.push_back(6);
  ll.push_back(7);
  ll.push_back(8);
  // ll.insert(10,15);
  // ll.pop_back();
  // ll.pop_front();
  // ll.iterativeSearch(26);
  
  ll.printLL();
  cout<<ll.searchRec(6);
  return 0;
}