#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n;
    cin>>n ;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int max1=max;
    // cout<<max;
    for(int i=1;i<=max;i++){
        int temp=max1;
        for(int j=0;j<n;j++){
            if(arr[j]==temp){
                cout<<"*\t";
                arr[j]--;
            }
            else{
                cout<<"\t";
            }
            
        }
        max1--;
        cout<<endl;
    }
}
