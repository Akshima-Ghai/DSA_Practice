#include <iostream>

using namespace std;

int main()
{
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    if(s1==s2){
        cout<<"strings are equal";
    }else{
        cout<<"strings are not equal";
    }

    return 0;
}
