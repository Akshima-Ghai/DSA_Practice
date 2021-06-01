#include <bits/stdc++.h>

using namespace std;
void swap(int a[], int b, int c) {
     int temp = a[c];
    a[c] = a[b];
    a[b] = temp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr,i,i+1);
        }
    }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
