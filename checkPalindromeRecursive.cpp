#include <iostream>
using namespace std;
int palindrome(string s, int left, int right)
{
    if (left <= right)
    {
        if (s[left] != s[right])
        {
            return 0;
        }
        else
        {
            return palindrome(s, left + 1, right - 1);
        }
    }
    else
    {
        return 1;
    }
}
int main()
{
    string s;
    cin >> s;
    int left = 0;
    int right = s.length() - 1;
    if (palindrome(s, left, right))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}
