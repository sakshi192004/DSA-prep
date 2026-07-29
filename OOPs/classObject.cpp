#include<iostream>
using namespace std;
class user {
  public:
  int id;
  string usrername;
  string password;
  string bio;

  void deactivate(){
    cout<<"deleting account\n";
  }

  void editBio(string newBio){
    bio =  newBio;
    cout<<bio<<"\n";
  }
};

int main(){
  user u1;
  u1.id=123;
  u1.editBio("every thing is temp");
  u1.deactivate();
  return 0;
}