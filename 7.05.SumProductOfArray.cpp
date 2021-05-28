#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0,product=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<sum<<endl;
    cout<<product;
    
    
    return 0;
}
