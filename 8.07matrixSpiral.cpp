#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int top=0,bottom=n-1,left=0,right = m-1,dir=0;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    while(top<=bottom && left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++){
                cout<<arr[top][i]<<" ";
            }
            top++;
            dir=1;
        }else if(dir==1){
            for(int i=top;i<=bottom;i++){
                cout<<arr[i][right]<<" ";
            }
            right--;
            dir=2;
        }else if(dir==2){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
            dir=3;
        }else if(dir==3){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
            dir=0;
        }
        
    }
    return 0;
}
