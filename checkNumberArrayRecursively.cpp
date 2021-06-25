#include <iostream>
using namespace std;
int checkNumber(int arr[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == x)
    {
        return true;
    }
    return checkNumber(arr + 1, n - 1, x);
}
int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    if (checkNumber(arr, n, x))
    {
        cout << "Number Found";
    }
    else
    {
        cout << "Number Not Found";
    }

    return 0;
}
