#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,rem,ans=0,temp;
    cin>>n;
    temp=n;
    // cout<<temp<<" ";
    while(n>0){
        rem = n%10;
        ans= ans + pow(rem,3);
        n/=10;
    }
    // cout<<ans<<" ";
    if(ans==temp){
        cout<<temp<<" is an armstrong number";
    }
    else{
        cout<<temp<<" is not an armstrong number";
    }
    return 0;
}
