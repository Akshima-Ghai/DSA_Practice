#include <iostream>
using namespace std;
int main()
{
    int before_row = 0, before_col = 0, count = 0;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                before_row = i;
                before_col = j;
                break;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (before_row < 2)
        {
            before_row++;
            count++;
        }
        else if (before_row > 2)
        {
            before_row--;
            count++;
        }
    }

    for (int j = 0; j < 5; j++)
    {
        if (before_col < 2)
        {
            before_col++;
            count++;
        }
        else if (before_col > 2)
        {
            before_col--;
            count++;
        }
        }

    cout << count;
    return 0;
}
