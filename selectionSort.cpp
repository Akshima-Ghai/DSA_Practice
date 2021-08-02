#include <iostream>
using namespace std;
int selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int current = arr[i];
        int min_pos = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }

        swap(arr[i], arr[min_pos]);
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
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
