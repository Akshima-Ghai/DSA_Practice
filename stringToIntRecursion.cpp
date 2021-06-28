#include <iostream>
using namespace std;

// int ans;
int convert(string s)
{
    if (s.length() == 0)
    {
        return 0;
    }
    int ans = s[0] - '0';
    cout << ans;
    convert(s.substr(1));
}
int main()
{
    string s;
    cin >> s;
    convert(s);
}
