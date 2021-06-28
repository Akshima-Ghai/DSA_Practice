#include <iostream>
using namespace std;
string replaceRec(string s, char a, char b)
{
    if (s.length() == 0)
    {
        return s;
    }
    if (s[0] == a)
    {
        cout << b;
    }
    else
    {
        cout << s[0];
    }
    return replaceRec(s.substr(1), a, b);
}

int main()
{
    string s;
    cin >> s;
    char a, b;
    cin >> a >> b;
    replaceRec(s, a, b);
}
