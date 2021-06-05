#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, min_pos, max_pos;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min_height = *min_element(arr, arr + n);
    int max_height = *max_element(arr, arr + n);
    // cout << min_height;
    // cout << " " << max_height << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max_height)
        {
            max_pos = i;
            break;
        }
    }
    // cout << min_pos << " " << max_pos << endl;
    for (int i = 0; i < n; i++)
    {
        if (max_pos != 0)
        {
            swap(arr[max_pos], arr[max_pos - 1]);
            max_pos--;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min_height)
        {
            min_pos = i;
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min_pos != n - 1)
        {
            swap(arr[min_pos], arr[min_pos + 1]);
            min_pos++;
            count++;
        }
    }

    cout << count;

    return 0;
}
