#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int searchValue)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == searchValue)
        {
            return mid;
        }
        else if (arr[mid] > searchValue)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int search = binarySearch(arr, n, 6);
    cout << search;
    return 0;
}
