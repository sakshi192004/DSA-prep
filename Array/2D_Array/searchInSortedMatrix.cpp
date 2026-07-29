#include<iostream>
using namespace std;
// int search(int mat[][4],int n,int m,int k){ //o(n*m)

//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       if(mat[i][j]==k){
//         cout<<"found at ("<<i<<","<<j<<")";
//         return true;
//       }
//     }
//   }
//   return false;
// }
// bool search(int mat[][4],int n,int m,int k){ //o(n*m)

//   int low=0;
//   int high=n*m-1;

//  while(low<=high){
//         int mid = low + (high-low)/2;
//         int midVal=mat[mid/m][mid%m];
//         if(midVal==k){
//           // cout<<"found at ("<<low<<","<<high<<")";
//           return true;
//         }else if(k>midVal){
//           low=mid+1;
//         }else{
//           high=mid-1;
//         }
//     }
//   return false;
// }
// bool search(int mat[][4],int n,int m,int k){ //o(n*m)//staircase Search

//   int low=0;
//   int high=n*m-1;

//  while(low<=high){
//         int mid = low + (high-low)/2;
//         int midVal=mat[mid/m][mid%m];
//         if(midVal==k){
//           // cout<<"found at ("<<low<<","<<high<<")";
//           return true;
//         }else if(k>midVal){
//           low=mid+1;
//         }else{
//           high=mid-1;
//         }
//     }
//   return false;
// }

bool search(int mat[][4],int n,int m,int k){ //staircase solution

  int j=0;
  int i=n-1;

 while(j<n&&i>=0){
  if(mat[i][j]==k){
    cout<<"found at ("<<i<<","<<j<<")\n";
    return true;
  }else if(mat[i][j]>k){
    i--;
  }else{
    j++;
  }
 }
 cout<<"not found";
  return false;
}

int main(){
  int mat[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,45},{32,33,39,50}};
  search(mat,4,4,33);

  return 0;
}