#include<iostream>
using namespace std;
int decimalToBase(int a,int b){
    int mul=1,rem,num=0;
    while(a>0){
        rem = a%b;
        num += mul*rem;
        mul=mul*b;
        a/=b;
    }
    return num;
}
int main(){
    int a,b;
    cin>>a>>b;
    
    cout<<decimalToBase(a,b);
    return 0;
}
