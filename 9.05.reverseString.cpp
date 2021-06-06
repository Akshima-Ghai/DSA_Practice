
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s,rev_s;
    cin>>s;
    
    for(int i=s.size()-1;i>=0;i--){
        rev_s.push_back(s[i]);
    }
    cout<<rev_s;
    return 0;
}
