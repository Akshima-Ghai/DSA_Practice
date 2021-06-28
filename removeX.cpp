#include <iostream>
using namespace std;
string remveX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    if (s[0] != 'x')
    {
        cout << s[0];
    }

    return (remveX(s.substr(1)));
}

int main()
{
    string s;
    cin >> s;
    cout << remveX(s);
}
