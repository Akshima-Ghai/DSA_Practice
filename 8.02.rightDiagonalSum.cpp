#include <iostream>

using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(arr[i][j]==arr[i][n-i-1]){
                sum+=arr[i][n-i-1];
            }
        }
    }
cout<<sum;
    return 0;
}
