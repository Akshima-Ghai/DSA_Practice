#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count_even=0,count_odd=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even++;
        }else if(arr[i]%2 !=0){
            count_odd++;
        }
    }
    cout<<count_odd<<" "<<count_even;
    return 0;
}
