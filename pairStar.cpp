#include <iostream>
using namespace std;
string starPair(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    if (s.length() == 1)
    {
        cout << s[0];
        return "";
    }
    if (s[0] == s[1])
    {
        cout << s[0] << "*" ;
        return starPair(s.substr(1));
    }
    cout << s[0];
    return starPair(s.substr(1));
}
int main()
{
    string s;
    cin >> s;
    starPair(s);
    return 0;
}
