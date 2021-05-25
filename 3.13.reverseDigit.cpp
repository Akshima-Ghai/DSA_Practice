#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,rem,ans=0;
    cin>>n;
    while(n>0){
        rem = n%10;
        ans = ans*10 + rem;
        
        n/=10;
    }
    cout<<ans;

    return 0;
}
