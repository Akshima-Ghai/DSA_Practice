#include <iostream>
using namespace std;
int count = 0;
int numDigit(int n)
{

    if (n == 0)
    {
        return count;
    }
    count++;
    numDigit(n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << numDigit(n);
    return 0;
}
