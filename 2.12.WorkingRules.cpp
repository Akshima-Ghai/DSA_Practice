
#include <iostream>

using namespace std;

int main()
{
    int age;
    char gender, marital_status;
    cout<<"Enter your Age"<<endl;
    cin>>age;
    cout<<"Enter your Gender(M or F)"<<endl;
    cin>>gender;
    cout<<"Are you Married(Y or N)"<<endl;
    cin>>marital_status;
    if(gender=='F'){
        cout<<"You can work in urban area";
    }else if(gender=='M'){
        if(age>=20 and age<=40){
            cout<<"You can work anywhere";
        }else if(age>=40 and age<=60){
            cout<<"You are allowed to work in urban area";
        }
    }else{
        cout<<"ERROR";
    }
}
