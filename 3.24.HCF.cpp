#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int min_num = min(n1,n2);
    for(int i=min_num;i>=1;i--){
        if(n1%i==0 and n2%i==0){
            cout<<i;
            break;
        }
    }

    return 0;
}
