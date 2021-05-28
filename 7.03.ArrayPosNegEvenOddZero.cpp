#include <iostream>

using namespace std;

int main()
{
    int n,count_p=0,count_n=0,count_even=0,count_odd=0,count_zero=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            count_p++;
            if(arr[i]%2==0){
                count_even++;
            }else{
                count_odd++;
            }
        }else if(arr[i]<0){
            count_n++;
            if(arr[i]%2==0){
                count_even++;
            }else{
                count_odd++;
            }
        }else{
            count_zero++;
        }
    }
    cout<<"Positive "<<count_p<<endl;
    cout<<"Negative "<<count_n<<endl;
    cout<<"Even "<<count_even<<endl;
    cout<<"Odd "<<count_odd<<endl;
    cout<<"Zero "<<count_zero<<endl;
    return 0;
}
