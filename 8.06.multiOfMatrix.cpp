#include <iostream>

using namespace std;

int main()
{
    int n,m,sum;
    cin>>n>>m;
    int arr[n][m],brr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=0;
            for(int k=0;k<m;k++){
                sum= sum + arr[i][k] * brr[k][j];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }

    return 0;
}
