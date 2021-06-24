#include <iostream>
#include <cmath>
using namespace std;
double gm = 0;
float geometricSum(int k)
{
    if (k < 0)
    {
        return gm;
    }
    gm += 1 / (pow(2, k));
    return geometricSum(--k);
}
int main()
{
    int k;
    cin >> k;
    cout << geometricSum(k);
    return 0;
}
