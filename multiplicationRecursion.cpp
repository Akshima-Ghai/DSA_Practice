#include <iostream>
using namespace std;
int sum = 0;
int multiplication(int m, int n)
{
    if (n > 0)
    {
        sum += m;
        multiplication(m, n - 1);
    }
    return sum;
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << multiplication(m, n);
    return 0;
}
