#include <iostream>

using namespace std;

int main()
{
    
    int classHeld,classAttended,attendance;
    cout<<"Number of Classes held"<<endl;
    cin>>classHeld;
    cout<<"Number of Classes attended"<<Endl;
    cin>>classAttended;
    attendance = (classAttended/classHeld)*100;
    if(attendance<75){
        cout<<"Not allowed to sit in examionation";
    }else{
        cout<<"All the best for your paper";
    }
    return 0;
}
