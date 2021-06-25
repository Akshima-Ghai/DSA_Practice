#include <iostream>
using namespace std;
int count = 0;
int firstIndex(int arr[], int n, int x)
{

    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == x)
    {
        return count;
    }
    count++;
    firstIndex(arr + 1, n - 1, x);
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
    cout << firstIndex(arr, n, x);

    return 0;
}
