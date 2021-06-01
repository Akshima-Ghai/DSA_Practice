#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,oddCount=0,evenCount=0;
    cin>>n;
    int arr[n],even[n] , odd[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[evenCount]=arr[i];
            evenCount++;
        }else if(arr[i]%2!=0){
            odd[oddCount]=arr[i];
            oddCount++;
        }
    }
    cout<<"Odd array ";
    for(int i=0;i<oddCount;i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    cout<<"Even array " ;
    for(int i=0;i<evenCount;i++){
        cout<<even[i]<<" ";
    }
    return 0;
}
