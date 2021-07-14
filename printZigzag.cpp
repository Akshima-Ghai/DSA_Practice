#include<iostream>
using namespace std;


void pzz(int n){
    if(n==0){
        return;
    }
    // write your code here
    cout<<n<<" ";
    pzz(n-1);
    cout<<n<<" ";
    pzz(n-1);
    cout<<n<<" ";
}



int main(){
    int n; cin>>n;
    pzz(n);
}
