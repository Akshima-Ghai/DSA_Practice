#include <iostream>
using namespace std;
int printOneToN(int n)
{
    if (n == 1)
    {
        cout << "1 ";
        return 1;
    }

    printOneToN(n - 1);
    cout << n << " ";
    return 0;
}
int main()
{
    int n;
    cin >> n;
    printOneToN(n);
    return 0;
}
