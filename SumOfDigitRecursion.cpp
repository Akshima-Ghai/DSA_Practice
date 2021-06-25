#include <iostream>
using namespace std;
int sum = 0;
int sumDigit(int n)
{
    if (n == 0)
    {
        return sum;
    }
    sum += n % 10;
    sumDigit(n / 10);
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << sumDigit(n);
}
