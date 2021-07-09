#include<iostream>
using namespace std;
int anyBaseToDecimal(int a,int b){
    int mul=1,rem,num=0;
    while(a>0){
        rem = a%10;
        num +=rem*mul;
        mul*=b;
        a/=10;
    }
    return num;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<anyBaseToDecimal(a,b);
    return 0;
}
