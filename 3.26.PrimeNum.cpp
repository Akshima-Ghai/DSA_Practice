#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,isPrime=1;
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number";
            isPrime=0;
            break;
        }
        
    }
    if(isPrime==1){
        cout<<n<<" is a prime number";
    }
    return 0;
}
