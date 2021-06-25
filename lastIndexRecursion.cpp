#include <iostream>

using namespace std;
int count=0;
int lastIndex(int arr[],int n,int x){
    if(n<=0){
        return 0;
    }
    if(arr[n]==x){
        return n;
    }
    return lastIndex(arr,n-1,x);
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    cout<<lastIndex(arr,n-1,x);
    return 0;
}
