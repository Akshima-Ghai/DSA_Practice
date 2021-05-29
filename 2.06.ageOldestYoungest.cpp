#include <iostream>

using namespace std;

int main()
{
    
    int age1,age2,age3,maxAge,minAge;
    cout<<"Enter 3 ages"<<endl;
    cin>>age1>>age2>>age3;
    if(age1>age2 and age1>age3){
        maxAge=age1;
        if(age2>age3){
            minAge=age3;
        }
        else{
            minAge=age2;
        }
    }else if(age2>age3){
        maxAge=age2;
        if(age1>age3){
            minAge=age3;
        }
        else{
            minAge=age1;
        }
    }else{
        maxAge=age3;
        minAge=age1;
    }
    cout<<"Maximum age is "<<maxAge<<endl;
    cout<<"Minimum age is "<<minAge;
    return 0;
}
