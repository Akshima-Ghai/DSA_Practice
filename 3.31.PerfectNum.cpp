#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,temp,ans=0;
    cin>>n;
    temp=n;
    // cout<<temp<<" ";
    for(int i=1;i<n;i++){
        if(n%i==0){
            ans+=i;
        }
    }
    // cout<<ans<<" ";
    if(ans==temp){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a Perfect number";
    }
    return 0;
}
