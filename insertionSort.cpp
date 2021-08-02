#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        while (prev >= 0 and arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
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
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
