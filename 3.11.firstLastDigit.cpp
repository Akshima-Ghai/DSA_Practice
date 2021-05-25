#include <iostream>

using namespace std;

int main()
{
    int n,first,last;
    cin>>n;
    last=n%10;
    while(n>0){
        
        first=n%10;
        n/=10;
    }
    cout<<"last digit is " <<last<<endl;;
    cout<<"first digit is "<<first;

    return 0;
}
