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

  void printLL(){
    Node* temp = head;
    while(temp!=NULL){
      cout<<temp->data<<" -> ";
      temp = temp->next;
    }
    cout<<"NULL\n";
  }
  void insert(int val,int pos){
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=0;i<pos-1;i++){
      if(temp==NULL){
        cout<<"Invalid position\n";
        return;
      }
      temp = temp->next;
    }
    //now temp is at pos-1
    newNode->next = temp->next;
    temp->next=newNode; 
  }

  void pop_front(){
    if(head==NULL){
      cout<<"LL is empty";
      return;
    }
    Node* temp = head;
    head=head->next; 
    temp->next = NULL;
    delete temp;
  }

  void pop_back(){
    Node* temp = head;
    while(temp->next->next!=NULL){
      temp =temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail = temp;
  }

  int searchItr(int key){
    Node* temp =head;
    int idx = 0;
    while(temp!=NULL){
      if(temp->data == key){
        cout<<key<<" is present at pos "<<idx<<endl;
        return 1;
      }
      temp = temp->next;
      idx++;
    }
    cout<<"not present";
    return -1;
  }
  int helper(Node* temp,int key){
    if(temp==NULL){
      return -1;
    }

    if(temp->data==key){
      return 0;
    }
    int idx = helper(temp->next,key);
    if(idx==-1){
      return -1;
    }
    return idx+1;
  }
  int searchRec(int key){
    helper(head,key);
  }

  void reverse(){
    Node* prev = NULL;
    Node* curr = head;
    tail = head;
    while(curr!=NULL){
      Node* next = curr->next;
      curr->next=prev;
      prev = curr;
      curr=next;
    }
    // tail = head;
    head = prev;
  }
  int getSize(){
    int sz = 0;
    Node* temp = head;
    while(temp!=NULL){
      temp = temp->next;
      sz++;
    }
    return sz;
  }
  void removeNth(int n){ //tc O(n)--------sc= O(1)
    Node* prev = head;
    int size =getSize();
    for(int i=1;i<(size-n);i++){
      prev= prev->next;
    }
    Node* toDel = prev->next;
    cout<<"going to delete : "<<toDel->data;
    cout<<endl;
    prev->next=prev->next->next;
  }

};
int main(){
  List ll;
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.push_back(4);
  ll.push_back(5);
  
  // ll.insert(8,2);
  // ll.pop_front();
  // ll.pop_front();
  // ll.pop_front();
  ll.removeNth(2);
  ll.printLL();
  // ll.printLL();
  // ll.searchItr(4);
  //  cout<<ll.searchRec(4);
  // ll.reverse();
  // ll.printLL();

  return 0;
}