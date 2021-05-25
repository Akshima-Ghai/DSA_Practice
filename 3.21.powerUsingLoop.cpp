#include <iostream>

using namespace std;

int main()
{
    int base,exponent,ans=1;
    cin>>base;
    cin>>exponent;
    for(int i=1;i<=exponent;i++){
        ans*=base;
    }
    cout<<ans;
    return 0;
}
