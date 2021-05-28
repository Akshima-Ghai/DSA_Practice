#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    for(int i=n-1;i>=0;i--){
        brr[i]=arr[j];
        j++;
    }
    for(int k=0;k<n;k++){
        cout<<brr[k]<<" ";
    }
    return 0;
}
