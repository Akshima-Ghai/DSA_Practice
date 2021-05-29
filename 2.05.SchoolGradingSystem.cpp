#include <iostream>

using namespace std;

int main()
{
    
    int marks;
    string grade;
    cout<<"enter marks "<<endl;
    cin>>marks;
    if(marks>0 and marks<25){
        grade="F";
    }else if(marks<45){
        grade="E";
    }else if(marks<50){
        grade="D";
    }else if(marks<60){
        grade="C";
    }else if(marks<80){
        grade="B";
    }else if(marks<=100){
        grade="A";
    }else{
        cout<<"Enter marks between 0 and 100";
    }
    cout<<grade;
    return 0;
}
