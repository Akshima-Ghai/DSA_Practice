#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,min=0,max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1]<min)){
            min=abs(arr[i]-arr[i-1]);
        }if(abs(arr[i]-arr[i-1]>max)){
            max=abs(arr[i]-arr[i-1]);
        }
    }
    cout<<"Minimum "<<min<<endl;
    cout<<"Maximum "<<max<<endl;

    return 0;
}
