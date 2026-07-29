#include <iostream>
#include <vector>
#include<string>
using namespace std;
template <class T>
class Stack
{
vector<T> vec;

public:
  void push(T val)
  {
    vec.push_back( val);
  }
  void pop()
  {
    if (isEmpty())
    {
      cout << "stack is Empty\n";
      return;
    }
    vec.pop_back();
  }

  T top()
  {
    // if(isEmpty()){
    //   cout<<"stack is Empty\n";
    //   return -1;
    // }
    int idx = vec.size() - 1;
    return vec[idx];
  }
  bool isEmpty()
  {
    return vec.size() == 0;
  }
};

int main()
{
  Stack<string> s;
  s.push("sakshi");
  s.push("surbhi");
  s.push("mushkan");
  s.push("anjali");
  s.push("Suman");
  
  while (!s.isEmpty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}