#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    (n<0) ? cout<<n<<" is negative" : ((n == 0) ?  cout<<n<<" is zero" : cout<<n<<" is positive") ;
    return 0;
}
