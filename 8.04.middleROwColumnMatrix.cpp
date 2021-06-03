#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Middle Row is ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==n/2){
            cout<<arr[i][j]<<" ";
        }
    }
    }    
        cout<<endl;
    cout<<"Middle Column is ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==m/2){
            cout<<arr[i][j]<<" ";
        }
    }
    }  
        cout<<endl;
    
    return 0;
}
