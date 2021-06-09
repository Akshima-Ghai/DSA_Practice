#include <iostream>

using namespace std;
//hello
int main()
{
    
    int n;
    cin>>n;
    if(n>0){
        cout<<n<<" is positive";
    }else if(n<0){
        cout<<n<<" is negative";    
    }else{
        cout<<n<<" is zero";
    }
    
    return 0;
}
