#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,min_diff=INT_MAX;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<m-n+1;i++){
        if((arr[n+i-1]-arr[i])<min_diff){
            min_diff= arr[n+i-1]-arr[i];
        }
        
    }
    cout<<min_diff;

    return 0;
}
