#include <iostream>
using namespace std;
void removeDup(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == s[1])
    {

        removeDup(s.substr(1));
    }
    else
    {
        cout << s[0];
        removeDup(s.substr(1));
    }
}

int main()
{
    string s;
    cin >> s;
    removeDup(s);
}
