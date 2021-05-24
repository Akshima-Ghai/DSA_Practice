#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter an Alphabet";
    cin>>ch;
    if(ch>=65 and ch<=90){
        cout<<"You entered a Uppercase Character";
    }else if(ch>=97 and ch<=112){
        cout<<"You entered a Lowercase Character";
    }
    else{
        cout<<"Enter only Alphabet";
    }

    return 0;
}
