#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=0;
    int h= s.length()-1;
    while(h>l){
        if(s[l]!=s[h]){
            cout<<s<<" not a palindrome";
            return 0;
        }
        l++;
        h--;
    }
    cout<<s<<" is a palindrome";

    return 0;
}
