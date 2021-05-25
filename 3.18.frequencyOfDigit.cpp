#include <iostream>

using namespace std;

int main()
{
    int n,rem;
    cin>>n;
    int arr[10] = {0};
  
    while(n>0){
        rem = n%10;
        n/=10;
        arr[rem]++;
    }
    for(int i=0;i<10;i++){
      cout<<"The frequence of "<<i<<" is "<<arr[i]<<endl;
    }
    

    return 0;
}
