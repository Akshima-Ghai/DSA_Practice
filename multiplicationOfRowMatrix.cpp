
#include <iostream>

using namespace std;

int main()
{
    int n,m,mul=1;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        mul=1;
        for(int j=0;j<m;j++){
            mul*=arr[i][j];
        }
        cout<<mul<<endl;
    }
    return 0;
}
