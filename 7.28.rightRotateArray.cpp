#include <iostream>

using namespace std;

void swap(int arr[],int b,int c){
    int temp=arr[b];
    arr[b]=arr[c];
    arr[c]=temp;
}

int main()
{
    int n,rot,ele=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of times to rotate "<<endl;
    cin>>rot;
    
    for(int i=0;i<rot;i++){
        ele=arr[n-1];
        for(int j=n-1;j>=0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=ele;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
