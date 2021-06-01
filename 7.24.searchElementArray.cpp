#include <iostream>

using namespace std;

int main()
{
    int n,ele,count=0;
    cin>>n;
    cout<<"Enter element to be searched in an array ";
    cin>>ele;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cout<<"Element is present at index "<<i;
            
            break;
        }
        count++;
    }
    if(count==n){
        cout<<"Element is not present";
    }
    return 0;
}
