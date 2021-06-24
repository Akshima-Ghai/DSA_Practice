#include <iostream>
using namespace std;
int count = 0;
int countZeros(int n)
{
    if (n == 0)
    {
        return count;
    }
    if (n % 10 == 0)
    {
        count++;
    }
    countZeros(n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << countZeros(n);
    return 0;
}
