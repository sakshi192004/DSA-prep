#include<iostream>
using namespace std;
int main(){
int marks[5];
int n = sizeof(marks) / sizeof(int);
cout<<n<<"\n";
 cout<<"enter elements: ";
for(int i=0;i<n;i++){
 
  cin>>marks[i];
}

for(int i=0;i<n;i++){
  cout<<marks[i]<<" ";
}


return 0;
}
