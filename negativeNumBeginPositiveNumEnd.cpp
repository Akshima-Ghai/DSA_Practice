#include<iostream>
using namespace std;
int main(){
  int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
  int j=0;
  for(int i=0;i<9;i++){
    if(arr[i]<0){
      swap(arr[i],arr[j]);
      j++;
    }

  }
  for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
