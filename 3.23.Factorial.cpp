#include <iostream>

using namespace std;

int main()
{
    int num,ans=1;
    cin>>num;
    if(num==0 or num==1){
        ans=1;
    }else if(num>1){
        for(int i=num;i>=1;i--){
            ans*=i;
        }
    }
    cout<<ans;
    return 0;
}
