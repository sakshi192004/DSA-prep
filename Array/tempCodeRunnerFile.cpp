int removeDuplicates(int arr[],int n){//return size of array after removing duplicate
  set<int>s;
  for(int i=0;i<n;i++){
    s.insert(arr[i]);
  }
  return s.size();
}
