#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *prev;
  Node *next;
  Node(int val)
  {
    data = val;
    prev = NULL;
    next = NULL;
  }
};
class DoublyList
{
public:
  Node *head;
  Node *tail;
  DoublyList()
  {
    head = tail = NULL;
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
      head->prev = newNode;
      head = newNode;
    }
  }
  void pop_front()
  {
    Node *temp = head;
    head = head->next;
    if (head != NULL)
    {
      head->prev = NULL;
    }
    temp->next = NULL;
    delete temp;
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
      newNode->prev = tail;
      tail = newNode;
    }
  }

  void pop_back(){
    if(head==NULL){
      cout<<"List is Empty\n";
      return;
    }
      Node* temp =tail;
      tail=tail->prev;
      tail->next=NULL;
      temp->prev=NULL;
      temp->next=NULL;
      delete temp;
  }

  void printDll(Node *head)
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << "<=>";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};
int main()
{
  DoublyList dll;
  dll.push_front(3);
  dll.push_front(2);
  dll.push_front(1);
  dll.push_back(4);
  dll.push_back(5);
  dll.push_back(6);
  dll.push_back(7);
  dll.printDll(dll.head);
  dll.pop_back();
  dll.printDll(dll.head);
  return 0;
}