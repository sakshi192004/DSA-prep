#include<iostream>
using namespace std;

class Car{
  public:
  string name;
  string color;
  int* mileage;
// constructor overloading

  Car(){//non-parameterized
      cout<<"constructor is called, object being created";
   }
   Car(string name, string color){//parameterized
      
     this->name = name;
      this->color = color;//*this.color=color
      mileage = new int;//dynamic allocation
      *mileage=12;
   }
   Car(Car &original){  //copy cunstructor
    cout<<"copying original to new...\n";
    name=original.name;
    color=original.color;
     mileage = new int;
    *mileage=*original.mileage;
   }
  void start(){
    cout<<"car has started..";
  }
  void stop(){
    cout<<"car has stoped...";
  }
  //getter
  string getName(){
    return name;
  }
  string getColor(){
    return color;
  }
};

// class User{
//   private:
//   int id;
//   string password;
//   public:
//   string userName;
//   User(int id){
//     this->id=id;
//   }
//   void setPassword(string Password){
//   this->password =Password;
//   }

//   string getPassword(){
//     return password;
//   }

// };

int main(){
  // Car c0;
  Car c1("maruti 800","red");
  // cout<<endl;
  // cout<<"car name : "<<c1.getName()<<endl;;
  // cout<<"car color : "<<c1.getColor();
  // Car c2(c1);//automatic copy
  Car c2(c1);//custom copy constructor call
  cout<<"car name : "<<c2.getName()<<endl;;
   cout<<"car color : "<<c2.getColor()<<endl;;
   cout<<"car mileage: "<<*c2.mileage<<endl;
    *c2.mileage = 10;
     cout<<"car mileage: "<<*c2.mileage<<endl;
    cout<<"car mileage: "<<*c1.mileage;

  //  User u1(45);
  //  u1.setPassword("sakshi@123");
  //   cout<<u1.getPassword();
  return 0;
}