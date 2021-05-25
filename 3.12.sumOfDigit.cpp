
#include <iostream>

using namespace std;

int main()
{
    int n,ans,sum=0;
    cin>>n;
    while(n>0){
        ans=n%10;
        n/=10;
        sum+=ans;
    }
    cout<<sum;
    return 0;
}
