#include <iostream>
using namespace std;
int main()
{
    int x, y, z, maximum = 0;
    cin >> x >> y >> z;

    int max1 = x + y + z;
    int max2 = (x + y) * z;
    int max3 = x * (y + z);
    int max4 = x * y * z;
    int arr[4] = {max1, max2, max3, max4};
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << maximum;

    return 0;
}
