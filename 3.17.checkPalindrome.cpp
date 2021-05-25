#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,rem,ans=0,temp;
    cin>>n;
    temp=n;
    while(n>0){
        rem = n%10;
        ans = ans*10 + rem;
        
        n/=10;
    }
    // cout<<ans;
    if(temp==ans){
        cout<<temp<<" is palindrome";
    }else{
        cout<<temp<<" is not a palindrome";
    }
    return 0;
}
