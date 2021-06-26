#include <iostream>
using namespace std;
int e(int x, int n)
{
    static int p = 1, f = 1;
    int r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * 1;
        return r + p / f;
    }
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << e(x, n);
    return 0;
}
