#include <bits/stdc++.h>
using namespace std;

int hashArr(int num, int arr[], int n){
  int count = 0;
  for(int i=0; i<n; i++){
    if(arr[i]==num) count+=1;
  }
  return count;
}

int main(){
  int arr []= {1,2,3,1,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);

  int a = 5;
  int res = hashArr(a, arr, n);

  cout<<res<<endl;
  return 0;
}