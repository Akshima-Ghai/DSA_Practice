
#include <iostream>

using namespace std;

int main()
{
    int num;
    string ans;
    cout<<"Enter number";
    cin>>num;
    while(num>0){
        ans=ans+to_string(num%10);
        num=num/10;
    }
    cout<<ans;
    return 0;
}
