#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
  ~Node()
  {
    if (next != NULL)
    {
      delete next;
      next = NULL;
    }
  }
};
class List
{
public:
  Node *head;
  Node *tail;


  List()
  {
    head = NULL;
    tail = NULL;
  }

  ~List()
  {
    if (head != NULL)
    {
      delete head;
      head = NULL;
    }
  }

  void push_front(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }
  void push_back(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }
};

void printLL(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL\n";
}

Node* splitAtMid(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  Node *prev = NULL;
  while (fast != NULL && fast->next != NULL)
  {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  if (prev!= NULL)
  {
    prev->next = NULL;
  }
  return slow; // rightHead
}

Node* reverse(Node* head){
  Node* prev = NULL;
  Node* curr=head;
  while(curr!=NULL){
    Node* next = curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  head = prev;
  return head;
}

Node* zigZag(Node* head){
Node* rightHead = splitAtMid(head);
Node* rightHeadRev = reverse(rightHead);
//alternate merging
  Node* left=head;
  Node* right = rightHeadRev;
  Node* tail = right;
  while(left!=NULL && right!=NULL){
    Node* nextLeft = left->next;
    Node* rightNext = right->next;

    left->next = right;
    right->next=nextLeft;

    tail = right;

    left = nextLeft;
    right=rightNext;

  }

  if(right!=NULL){
    tail->next= right;

  }
  return head;
}

int main()
{
  List ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);
  ll.push_back(5);
  ll.push_back(6);
  printLL(ll.head);
  ll.head=zigZag(ll.head);
  // cout<<ll.head->data;
  printLL(ll.head);
  return 0;
}