#include <iostream>

using namespace std;

int main()
{
    int n,read=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int j=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr[j]){
            cout<<"Array not equal for back and forth";
            read=0;
            break;
        }
        j++;
    }
    if(read==1){
        cout<<"Array is same from front and reverse";
    }
    return 0;
}
