#include <bits/stdc++.h>
using namespace std;
int main() {
    int temp; cin>>temp;
    string s = to_string(temp);
    int n=s.length(), flag=0;
        for(int i=0;i<s.length()/2;i++,n--){
            if(s[i]!=s[n-1]){
               flag=-1;
              break;
            }
        }
    flag==0 ? cout<<temp<<" is palindrome" : cout<<temp<<" is not a palindrome";
    return 0;
}
