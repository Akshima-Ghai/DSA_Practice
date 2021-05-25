#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int min_num = min(n1,n2);
    for(int i=min_num;i<=n1*n2;i++){
        if(i%n1==0 and i%n2==0){
            cout<<i;
            break;
        }
    }

    return 0;
}
