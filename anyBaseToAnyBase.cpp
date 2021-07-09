#include<iostream>
using namespace std;
int decimalToBase(int a,int b,int c){
    int mul=1,rem,num=0;
    while(a>0){
        rem=a%10;
        num+=rem*mul;
        mul*=b;
        a/=10;
    }
    int rem1,mul1=1,num1=0;
    while(num>0){
        rem1 = num%c;
        num1+=rem1*mul1;
        mul1*=10;
        num/=c;
    }
    return num1;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<decimalToBase(a,b,c);
    
    return 0;
}


