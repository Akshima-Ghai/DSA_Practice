#include <iostream>
using namespace std;
int c(int x, int r)
{
    if (r == 0 || r == x)
    {
        return 1;
    }
    else
    {
        return c(x - 1, r - 1) + c(x - 1, r);
    }
}
int main()
{
    int x, r;
    cin >> x >> r;
    cout << c(x, r);
    return 0;
}
