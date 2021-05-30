#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Largest Element of an array is "<<arr[n-1]<<endl;
    cout<<"Smallest Element of an Array is "<<arr[0];
    

    return 0;
}
