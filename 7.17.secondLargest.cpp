#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,largest=INT_MIN,second_largest=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest = arr[i];
        }else if(arr[i]>second_largest and arr[i]<largest){
            second_largest = arr[i];
        }
    }
    cout<<largest<<" "<<second_largest;
    return 0;
}
