#include <bits/stdc++.h>

using namespace std;
int insertElement(int arr[],int size , int x,int pos){

    for(int i=size-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos]=x;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n],crr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    insertElement(arr,n,7,2);
    
    return 0;
}
