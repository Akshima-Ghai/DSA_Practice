#include <iostream>
#include <string>
//useless
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int sum = n + m;
    int name = 0;
    while (sum > 1)
    {
        n--;
        m--;
        name++;
        if (n == 0 or m == 0)
        {
            break;
        }
        sum = n + m;
    }

    if (name % 2 == 0)
    {
        cout << "Malvika";
    }
    else
    {
        cout << "Akshat";
    }
    return 0;
}
