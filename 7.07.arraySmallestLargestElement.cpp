#include <iostream>

using namespace std;

int main()
{
    int n;
    int smallest,largest;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    smallest=arr[0];
    largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Smallest element is "<<smallest<<endl;
    cout<<"Largest element is "<<largest<<endl;
    
    
    return 0;
}
